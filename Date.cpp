#include "Date.h"

Date::Date()
{
    bookdate = bookmonth = bookyear = 0;

}

Date::Date(int a, int b, int c) :bookdate(a), bookmonth(b), bookyear(c)
{
}

Date::Date(Date const& t)
{
    bookdate = t.bookdate;
    bookmonth = t.bookmonth;
    bookyear = t.bookyear;

}

void Date::setbookdate(int a)
{
    bookdate = a;
}

void Date::setbookmonth(int a)
{
    bookmonth = a;

}

void Date::setbookyear(int c)
{
    bookyear = c;

}

int Date::getbookdate()
{
    return bookdate;
}

int Date::getbookmonth()
{
    return bookmonth;
}

int Date::getbookyear()
{
    return bookyear;
}

void Date::addLocation(string a, char* b)
{
    obj1.setcity(a);
    obj1.setaddress(b);

}

void Date::addVehicle(int a, int b, int c)
{
    obj2.setchassis(a);
    obj2.setenginenum(b);
    obj2.setid(c);

}

void Date::display()
{
    cout << "Date = " << bookdate << " / " << bookmonth << " / " << bookyear << endl;

}

Date::~Date()
{
    cout << "\nDestructor\n";

}