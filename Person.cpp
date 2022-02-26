#include "Person.h"

Person::Person()
{
	name = nullptr;
	cnic = nullptr;
}

Person::Person(char* a, char* b) :name(a), cnic(b)
{
}

Person::Person(Person const& t)
{
	name = t.name;
	cnic = t.cnic;

}

void Person::setname(char* a)
{
	name = a;
}


void Person::setcnic(char* b)
{
	cnic = b;

}

char* Person::getcnic()
{
	return cnic;
}

char* Person::getname()
{
	return name;
}

void Person::display()
{
	cout << "Name = " << name << endl;
	cout << "Cnic = ";
	for (int i = 0; i < 5; i++)
	{
		cout << cnic[i];
	}

	cout << "-";

	for (int i = 5; i < 12; i++)
	{
		cout << cnic[i];
	}

	cout << "-";

	cout << cnic[12] << endl;



}

Person::~Person()
{

	cout << "\nPerson Desttructor\n";
	delete[] name;
	delete[] cnic;

}