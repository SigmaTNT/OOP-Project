#pragma once
#pragma once

#include<iostream>
#include"Person.h"

class Nonfiler
{
	Person* obj;
	float tax;

public:

	Nonfiler();

	Nonfiler(float);

	Nonfiler(Nonfiler const&);

	float gettax();

	void settax(float);

	void addPerson(char*, char*);

	void display();

	~Nonfiler();



	//friend istream& operator >>(istream, const Nonfiler&);
	//friend ostream& operator <<(ostream, const Nonfiler&);

};