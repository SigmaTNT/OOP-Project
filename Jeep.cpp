#include "Jeep.h"

Jeep::Jeep()
{
	booknum = 0;
}

Jeep::Jeep(int a)
{
	booknum = a;
}

Jeep::Jeep(Jeep const& a)
{
	booknum = a.booknum;
}

void Jeep::setbooknum(int a)
{
	booknum = a;
}

int Jeep::getbooknum()
{
	return booknum;
}

void Jeep::setname(char* a)
{
	name = a;
}

char* Jeep::getname()
{
	return name;
}

void Jeep::display()
{
	Vehicle::display();
	cout << " Booking Number of Jeep = " << booknum << endl << endl;
	cout << "Name of Jeep = " << getname() << endl << endl;

	booknum++;
}


Jeep::~Jeep()
{
	cout << "\ndestructor\n";
	delete name;
}
int Jeep::booknum = 2001;