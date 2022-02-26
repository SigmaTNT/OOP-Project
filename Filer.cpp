#include "Filer.h"

Filer::Filer()
{
    tax = 0.0f;
}

Filer::Filer(float a) :tax(a)
{
}

Filer::Filer(Filer const& t)
{
    tax = t.tax;
}

float Filer::gettax()
{
    return tax;
}

void Filer::settax(float a)
{
    tax = a;
}

void Filer::addPerson(char* a, char* b)
{
    obj->setcnic(b);
    obj->setname(a);
}

void Filer::display()
{
    cout << "Tax of Filer Person = " << gettax() << endl;
}

Filer::~Filer()
{
    cout << "\nDestructor\n";
    delete obj;
}