#include "Location.h"

Location::Location()
{
    city = "\0";
    address = nullptr;
}

Location::Location(string a, char* b) :city(a), address(b)
{
}

Location::Location(Location const& a)
{
    city = a.city;
    address = a.address;

}

void Location::setcity(string a)
{
    city = a;
}

void Location::setaddress(char* b)
{
    address = b;

}

string Location::getcity()
{
    return city;
}

char* Location::getaddress()
{
    return address;
}

void Location::display()
{
    cout << " City = " << getcity() << endl;
    cout << "Address = " << getaddress() << endl;

}

Location::~Location()
{
    delete[] address;
}