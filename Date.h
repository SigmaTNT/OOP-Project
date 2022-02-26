#pragma once
#include<iostream>
#include"Location.h"
#include"Vehicle.h"

class Date
{
	int bookdate;
	int bookmonth;
	int bookyear;
	Location obj1;
	Vehicle obj2;


public:


	Date();

	Date(int, int, int);


	Date(Date const&);


	void setbookdate(int);
	void setbookmonth(int);
	void setbookyear(int);

	int getbookdate();
	int getbookmonth();
	int getbookyear();

	void addLocation(string, char*);

	void addVehicle(int, int, int);

	void display();

	~Date();


	//friend istream& operator >>(istream, const Date&);


	//friend ostream& operator <<(ostream, const Date&);
};