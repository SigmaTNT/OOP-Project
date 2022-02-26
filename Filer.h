#pragma once

#include<iostream>
#include"Person.h"

class Filer
{
	Person* obj;
	float tax;

public:

	Filer();

	Filer(float);

	Filer(Filer const&);

	float gettax();

	void settax(float);

	void addPerson(char*, char*);

	void display();

	~Filer();

	//friend istream& operator >>(istream, const Filer&);
	/*friend ostream& operator <<(ostream, const Filer&);*/



};