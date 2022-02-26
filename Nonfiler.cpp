#include "Nonfiler.h"

Nonfiler::Nonfiler()
{
    tax = 0.0f;
}

Nonfiler::Nonfiler(float a) :tax(a)
{
}

Nonfiler::Nonfiler(Nonfiler const& t)
{
    tax = t.tax;
}

float Nonfiler::gettax()
{
    return tax;
}

void Nonfiler::settax(float a)
{
    tax = a;
}

void Nonfiler::addPerson(char* a, char* b)
{
    obj->setcnic(b);
    obj->setname(a);
}

void Nonfiler::display()
{
    cout << "Tax of Nonfiler Person = " << gettax() << endl;
}

Nonfiler::~Nonfiler()
{
    cout << "\nDestructor\n";
    delete obj;
}