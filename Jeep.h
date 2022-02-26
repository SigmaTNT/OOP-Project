#pragma once
#include<iostream>
#include"Vehicle.h"

using namespace std;

class Jeep : public Vehicle
{

	static int booknum;
	char* name;
public:

	Jeep();
	Jeep(int);

	Jeep(Jeep const&);

	void setbooknum(int);

	int getbooknum();
	void setname(char*);
	char* getname();
	void display();

	~Jeep();

	friend istream& operator >>(istream, const Jeep&);
	friend ostream& operator <<(ostream, const Jeep&);

};