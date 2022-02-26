#pragma once
#include<iostream>
#include"Vehicle.h"

using namespace std;

class Car : public Vehicle
{
	static int booknum;
	char* name;


public:
	Car();
	Car(int);

	Car(Car const&);

	void setname(char*);
	char* getname();
	void setbooknum(int);

	int getbooknum();

	void display();

	~Car();

	friend istream& operator >>(istream, const Car&);
	friend ostream& operator <<(ostream, const Car&);



};


