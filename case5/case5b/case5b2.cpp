/*Program Name:This program shows the order of execution of constructors and destructors without virtual functions.
Author Name:Neelima Muvva
File Name:case5b2.cpp
Date:11-04-2020
*/
#include<iostream>
using namespace std;
class vehicle
{
int iNoofwheels;
public:
	vehicle()
	{
	cout<<"vehicle class constructor"<<endl;
	}
	vehicle(int ix)
	{
	cout<<"Inparametrised vehicle constructor"<<endl;
	iNoofwheels=ix;
	}
	~vehicle()
	{
	cout<<"vehicle class destructor"<<endl;
	}
};
class car:public vehicle
{
string iName;
public:
	car()
	{
	cout<<"car class constructor"<<endl;
	}
	car(string iName)
	{
	cout<<"In car class parametrised constructor"<<endl;
	this->iName=iName;
	}
	~car()
	{
	cout<<"car class destructor"<<endl;
	}
};
class bus:public vehicle
{
int iNoofseats;
public:
	bus()
	{
	cout<<"bus class constructor"<<endl;
	}
	bus(int iNoofseats)
	{
	cout<<"bus parrametrise constructor"<<endl;
	this->iNoofseats=iNoofseats;
	}
	~bus()
	{
	cout<<"Bus destructor"<<endl;
	}
};
int main(int argc,char **argv)
{
    if(argc==2)
	{
	cout<<"usage: ./a.out"<<endl;
	cout<<"This program gives description of orderof constructor and destructors execution"<<endl;
	}
	else
	{
	vehicle vl(4);
	car cl("nano");
	car c2;
	bus bl(20);
	bus b2;
	}
}
	
