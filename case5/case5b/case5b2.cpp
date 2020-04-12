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
	//consructor of vehicle class
	vehicle()
	{
	cout<<"vehicle class constructor"<<endl;
	}
	//parameterised  constructor of class 
	vehicle(int ix)
	{
	cout<<"Inparametrised vehicle constructor"<<endl;
	iNoofwheels=ix;
	}
	//Desturctor of vehicle class
	~vehicle()
	{
	cout<<"vehicle class destructor"<<endl;
	}
};
class car:public vehicle
{
string iName;
public:
//constructor of car class
	car()
	{
	cout<<"car class constructor"<<endl;
	}
	//parameterised constructor of car class
	car(string iName)
	{
	cout<<"In car class parametrised constructor"<<endl;
	this->iName=iName;
	}
	//Destructor of car class
	~car()
	{
	cout<<"car class destructor"<<endl;
	}
};
class bus:public vehicle
{
int iNoofseats;
public:
	//constructor of bus class
	bus()
	{
	cout<<"bus class constructor"<<endl;
	}
	//Parameterised constructor
	bus(int iNoofseats)
	{
	cout<<"bus parrametrise constructor"<<endl;
	this->iNoofseats=iNoofseats;
	}
	//destructor of bus class
	~bus()
	{
	cout<<"Bus destructor"<<endl;
	}
};
int main(int argc,char **argv)
{
   if(argc == 2 && strcmp(argv[1], "--help")==0)
   {
	
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
	
