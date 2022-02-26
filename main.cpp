
#include<iostream>

#include"Car.h"

#include"Date.h"

#include"Filer.h"

#include"Jeep.h"

#include"Location.h"

#include"Nonfiler.h"

#include"Person.h"

#include"Truck.h"

#include"Vehicle.h"

#include<fstream>



istream& operator >>(istream i, const Car& obj)
{
	i >> obj.name;
	i >> obj.booknum;
	return i;

}


istream& operator >>(istream i, const Truck& obj)
{
	i >> obj.name;
	i >> obj.booknum;
	return i;

}

istream& operator >>(istream i, const Jeep& obj)
{
	i >> obj.name;
	i >> obj.booknum;
	return i;

}

ostream& operator <<(ostream o, const Car& obj)
{
	o << obj.name;
	o << obj.booknum;
	return o;


}

ostream& operator <<(ostream o, const Jeep& obj)
{
	o << obj.name;
	o << obj.booknum;
	return o;


}

ostream& operator <<(ostream o, const Truck& obj)
{

	o << obj.name;
	o << obj.booknum;
	return o;

}

istream& operator >>(istream i, const Person& obj)
{
	i >> obj.cnic;
	i >> obj.name;

	return i;

}

ostream& operator <<(ostream o, const Person& obj)
{
	o << obj.cnic;
	o << obj.name;

	return o;


}




ostream& operator <<(ostream o, const Vehicle& obj)
{

	o << obj.chassis;
	o << obj.enginenum;
	o << obj.id;

	return o;


}


using namespace std;
int main()
{
	int ans = 1;
	int input2;
	int ans2 = 1;

	char* personname = new char[20];
	
	

		cout << "Enter 1 if you want to see deatils of specific id\n";
		cout << "Enter 2 if you want to delete the detail\n";

		cout << "Enter 3 if you want to input the details of the customer\n";

		cin >> input2;

		if (input2 == 1)
		{
			int id2;
			int id1;

			cout << "Enter id of the vehicle\n ";
			cin >> id2;

			ifstream fin;
			fin.open("details.txt", ios::in);

			bool flag = false;
			while (!fin.eof())
			{
				fin >> id1;
				if (id1 == id2)
				{
					flag = true;
					cout << "Id = " << id1 << endl;
					char* details = new char[50];

					for (int i = 0; i <= 10; i++)
					{
						fin.getline(details, 50);

						cout << details << endl;

					}
					break;
				}
				else
				{
					char* details = new char[50];


					for (int i = 0; i <= 10; i++)
					{
						fin.getline(details, 50);

					}

				}
			}
			if (flag == false)
			{
				cout << "No record has been found\n";

			}

		}

		if (input2 == 2)
		{

			int id2;
			int id1;

			cout << "Enter id of the vehicle\n ";
			cin >> id2;

			ifstream fin;
			fin.open("details.txt", ios::in);
			ofstream fout;

			bool flag = false;
			while (!fin.eof())
			{

				fin >> id1;
				if (id1 == id2)
				{

					flag = true;

				}
				char* details = new char[50];

				for (int i = 0; i <= 10; i++)
				{
					fin.getline(details, 50);

				}
			}
			fin.close();

			if (flag == false)
			{
				cout << "No record has been found\n";
				fin.close();

			}
			else if (flag == true)
			{

				fin.open("details.txt", ios::in);

				while (!fin.eof())
				{
					fin >> id1;
					if (id1 == id2)
					{
						char* details = new char[50];

						for (int i = 0; i <= 10; i++)
						{
							fin.getline(details, 50);

						}

					}


					else
					{
						fout.open("temp.txt", ios::app);

						char* details = new char[50];

						fout << id1;

						for (int i = 0; i <= 10; i++)
						{
							fin.getline(details, 50);
							fout << details << endl;


						}
						fout.close();
					}







				}

				fin.close();
				fout.open("details.txt", ios::out);
				fout.close();

				fin.open("temp.txt", ios::in);
				char* arr = new char[50];


				fout.open("details.txt", ios::app);
				while (!fin.eof())
				{
					fin.getline(arr, 50);
					fout << arr << endl;

				}

				fin.close();
				fout.close();
				fout.open("temp.txt", ios::out);
				fout.close();


			}
		}

		else if (input2 == 3)
		{

			while (ans != 0)
			{


				cout << "\n\n Welcome to Car Booking App\n\n";
				int inp;
				float totalprice = 0.0;
				float tax;

				Person personobj;
				char* cnic = new char[14];
				cin.ignore();
				cout << "Enter Person name\n";
				cin.getline(personname, 20);

				cout << "Enter cnic\n";
				cin.getline(cnic, 14);

				personobj.setcnic(cnic);
				personobj.setname(personname);

				int checkfile;

				cout << "Enter 1 if " << personobj.getname() << " is filer\n";
				cout << "Enter 2 if " << personobj.getname() << " is non-filer\n";

				cin >> checkfile;
				while (checkfile < 1 || checkfile > 2)
				{
					cout << "Wrong Input Enter Again" << endl;
					cin >> checkfile;

				}
				if (checkfile == 1)
				{
					Filer filerobj;
					cout << "Enter tax for Filer\n";
					cin >> tax;
					filerobj.settax(tax);
					totalprice += tax;
					filerobj.display();


				}
				else
				{
					Nonfiler nonfilerobj;
					cout << "Enter Tax for Non-Filer\n";
					cin >> tax;
					nonfilerobj.settax(tax);
					totalprice += tax;
					nonfilerobj.display();

				}
				string city; char* address = new char[30];
				Location locobj;
				cout << "\n\nEnter City name\n\n";
				cin >> city;
				locobj.setcity(city);
				cin.ignore();
				cout << "\nEnter complete Address for Delivery\n";
				cin.getline(address, 30);
				locobj.setaddress(address);


				cout << "Enter 1 to book Car\n";
				cout << "Enter 2 to book Truck\n";
				cout << "Enter 3 to book Jeep\n";
				cout << "Enter 4 to Exit\n";
				cin >> inp;
				while (inp > 4 || inp <= 0)
				{

					cout << "Wrong Input\n";
					cout << "Enter 1 to book Car\n";
					cout << "Enter 2 to book Truck\n";
					cout << "Enter 3 to book Jeep\n";
					cout << "Enter 4 to Exit\n";
					cin >> inp;

				}


				int id;
				int chassis;
				int engn;
				int date, month, year;

				if (inp == 1)
				{
					cout << "Welcome to Book a Car\n\n";

					Car carobj;
					cout << "Enter Id\n";
					cin >> id;
					cout << "Enter Chassis Number\n";
					cin >> chassis;
					cout << "Enter Engine number\n";
					cin >> engn;
					int bokn;
					cout << "Enter booking number\n";
					cin >> bokn;
					carobj.setbooknum(bokn);

					carobj.setid(id);
					carobj.setchassis(chassis);
					carobj.setenginenum(engn);

					char* model = new char[20];
					cin.ignore();
					cout << "Enter brand name\n";
					cin.getline(model, 20);
					carobj.setname(model);
					Date dateobj1;
					Date dateobj2;



					cout << "Enter Booking Date\n";
					cin >> date;
					dateobj1.setbookdate(date);


					cout << "Enter Booking Month\n";
					cin >> month;
					dateobj1.setbookmonth(month);

					cout << "Enter Booking year\n";
				cin >> year;
					dateobj1.setbookyear(year);


					cout << "Enter Delivery Date\n";
					cin >> date;
					dateobj2.setbookdate(date);

					cout << "Enter Delivery Month\n";
					cin >> month;
					dateobj2.setbookmonth(month);

					cout << "Enter Delivery year\n";
					cin >> year;
					dateobj2.setbookyear(year);

					int price;

					cout << "Enter The Price of The car\n";
					cin >> price;
					totalprice += price;

					cout << "\n\n Details: \n\n";
					personobj.display();

					locobj.display();
					cout << "\nBooking ";
					dateobj1.display();

					cout << "\nDelivery ";
					dateobj2.display();

					carobj.display();
					cout << "Total Price = " << totalprice << endl;


					ofstream fout;
					fout.open("details.txt", ios::app);
					fout << id << endl;
					fout << "Chassis Number = " << chassis << endl;
					fout << "Engine Number = " << engn << endl;
					fout << "Booking Number = " << bokn << endl;


					fout << "Person's name = " << personname << endl;
					fout << "City = " << city << endl;
					fout << "Address = " << address << endl;



					fout << "Booking Date = ";
					fout << dateobj1.getbookdate() << " / " << dateobj1.getbookmonth() << " / " << dateobj1.getbookyear() << endl;
					fout << "Delivery Date = ";
					fout << dateobj2.getbookdate() << " / " << dateobj2.getbookmonth() << " / " << dateobj2.getbookyear() << endl;
					fout << " Name of Vehicle = " << model << endl;
					fout << "Total Price = " << totalprice << endl;
					fout.close();

				}
				else if (inp == 2)
				{
					cout << "Welcome to Book a Truck\n\n";

					Truck truckobj;

					cout << "Enter Id\n";
					cin >> id;
					cout << "Enter Chassis Number\n";
					cin >> chassis;
					cout << "Enter Engine number\n";
					cin >> engn;
					int bokn;
					cout << "Enter booking number\n";
					cin >> bokn;
					truckobj.setbooknum(bokn);



					truckobj.setid(id);
					truckobj.setchassis(chassis);
					truckobj.setenginenum(engn);

					char* model = new char[20];
					cin.ignore();
					cout << "Enter brand name\n";
					cin.getline(model, 20);
					truckobj.setname(model);
					Date dateobj1;
					Date dateobj2;

					cout << "Enter Booking Date\n";
					cin >> date;
					dateobj1.setbookdate(date);

					cout << "Enter Booking Month\n";
					cin >> month;
					dateobj1.setbookmonth(month);

					cout << "Enter Booking year\n";
					cin >> year;
					dateobj1.setbookyear(year);


					cout << "Enter Delivery Date\n";
					cin >> date;
					dateobj2.setbookdate(date);

					cout << "Enter Delivery Month\n";
					cin >> month;
					dateobj2.setbookmonth(month);

					cout << "Enter Delivery year\n";
					cin >> year;
					dateobj2.setbookyear(year);

					int price;
					cout << "Enter The Price of The truck\n";
					cin >> price;
					totalprice += price;

					cout << "\n\n Details: \n\n";
					personobj.display();

					locobj.display();

					cout << "\nBooking ";
					dateobj1.display();

					cout << "\nDelivery ";
					dateobj2.display();

					truckobj.display();
					cout << "Total Price = " << totalprice << endl;

					ofstream fout;
					fout.open("details.txt", ios::app);
					fout << id << endl;
					fout << "Chassis Number = " << chassis << endl;
					fout << "Engine Number = " << engn << endl;
					fout << "Booking Number = " << bokn << endl;


					fout << "Person's name = " << personname << endl;
					fout << "City = " << city << endl;
					fout << "Address = " << address << endl;

					fout << "Booking Date = ";
					fout << dateobj1.getbookdate() << " / " << dateobj1.getbookmonth() << " / " << dateobj1.getbookyear() << endl;
					fout << "Delivery Date = ";
					fout << dateobj2.getbookdate() << " / " << dateobj2.getbookmonth() << " / " << dateobj2.getbookyear() << endl;
					fout << " Name of Vehicle = " << model << endl;
					fout << "Total Price = " << totalprice << endl;
					fout.close();

				}

				else if (inp == 3)
				{
					cout << "Welcome to Book a Jeep\n\n";

					Jeep jeepobj;

					cout << "Enter Id\n";
					cin >> id;
					cout << "Enter Chassis Number\n";
					cin >> chassis;
					cout << "Enter Engine number\n";
					cin >> engn;
					int bokn;
					cout << "Enter booking number\n";
					cin >> bokn;
					jeepobj.setbooknum(bokn);

					jeepobj.setid(id);
					jeepobj.setchassis(chassis);
					jeepobj.setenginenum(engn);

					char* model = new char[20];

					cin.ignore();
					cout << "Enter brand name\n";
					cin.getline(model, 20);
					jeepobj.setname(model);

					Date dateobj1;
					Date dateobj2;

					cout << "Enter Booking Date\n";
					cin >> date;
					dateobj1.setbookdate(date);

					cout << "Enter Booking Month\n";
					cin >> month;
					dateobj1.setbookmonth(month);

					cout << "Enter Booking year\n";
					cin >> year;
					dateobj1.setbookyear(year);


					cout << "Enter Delivery Date\n";
					cin >> date;
					dateobj2.setbookdate(date);

					cout << "Enter Delivery Month\n";
					cin >> month;
					dateobj2.setbookmonth(month);

					cout << "Enter Delivery year\n";
					cin >> year;
					dateobj2.setbookyear(year);

					int price;
					cout << "Enter The Price of The Jeep\n";
					cin >> price;
					totalprice += price;

					cout << "\n\n Details: \n\n";
					personobj.display();

					locobj.display();

					cout << "\nBooking ";
					dateobj1.display();

					cout << "\nDelivery ";
					dateobj2.display();

					jeepobj.display();
					cout << "Total Price = " << totalprice << endl;

					ofstream fout;
					fout.open("details.txt", ios::app);
					fout << id << endl;
					fout << "Chassis Number = " << chassis << endl;
					fout << "Engine Number = " << engn << endl;
					fout << "Booking Number = " << bokn << endl;


					fout << "Person's name = " << personname << endl;
					fout << "City = " << city << endl;
					fout << "Address = " << address << endl;

					fout << "Booking Date = ";
					fout << dateobj1.getbookdate() << " / " << dateobj1.getbookmonth() << " / " << dateobj1.getbookyear() << endl;
					fout << "Delivery Date = ";
					fout << dateobj2.getbookdate() << " / " << dateobj2.getbookmonth() << " / " << dateobj2.getbookyear() << endl;
					fout << "Name of Vehicle = " << model << endl;
					fout << "Total Price = " << totalprice << endl;
					fout.close();

				}

				else
				{

					cout << "Exiting the Program\n\n";

				}

				cout << "\nIf you want to Exit press 0 else input any integer and press enter\n";

				cin >> ans;

				cin.ignore();

			}
		}
	
	return 0;

}