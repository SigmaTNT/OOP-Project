#include "Car.h"

Car::Car()
{
	cout << "Constructor\n";
}

Car::Car(int a)
{
	booknum = a;
}

Car::Car(Car const& a)
{
	booknum = a.booknum;
}

void Car::setname(char* a)
{
	name = a;
}

char* Car::getname()
{
	return name;
}

void Car::setbooknum(int a)
{
	booknum = a;
}

int Car::getbooknum()
{
	return booknum;
}

void Car::display()
{
	Vehicle::display();
	cout << " Booking Number of Car = " << booknum << endl << endl;
	cout << "Name of Car = " << getname() << endl << endl;

	booknum++;
}


Car::~Car()
{
	cout << "\ndestructor\n";
	delete[] name;

}


int Car::booknum = 1001;


