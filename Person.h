#pragma once
#include<iostream>

using namespace std;


class Person
{
private:
	char* name;
	char* cnic = new char[14];

public:

	Person();
	Person(char*, char*);
	Person(Person const&);

	void setname(char*);
	void setcnic(char*);

	char* getcnic();
	char* getname();

	void display();

	~Person();


	friend istream& operator >>(istream, const Person&);
	friend ostream& operator <<(ostream, const Person&);


};