#pragma once

#include<iostream>

using namespace std;

class Location
{
	string city;
	char* address;

public:

	Location();

	Location(string, char*);

	Location(Location const&);

	void setcity(string);
	void setaddress(char*);

	string getcity();
	char* getaddress();


	void display();

	~Location();

	////friend istream& operator >>(istream, const Location&);
	//friend ostream& operator <<(ostream, const Location&);

};