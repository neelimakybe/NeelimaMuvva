/*Program Name:This program shows the order of execution of constructors and destructors without virtual functions.
Author Name:Neelima Muvva
File Name:case5b2.cpp
Date:11-04-2020
*/
#include<iostream>
using namespace std;
class car
{
int inumofwheels;
public:
	//consructor of vehicle class
	car()
	{
	cout<<"car class constructor"<<endl;
	}
	//parameterised  constructor of class 
	car(int ix)
	{
	cout<<"Inparametrised car constructor"<<endl;
	inumofwheels=ix;
	}
	//Desturctor of car class
	~car()
	{
	cout<<"car class destructor"<<endl;
	}
};
class bmw:public car
{
string iName;
public:
//constructor of bmw class
	bmw()
	{
	cout<<"bmw class constructor"<<endl;
	}
	//parameterised constructor of bmw class
	bmw(string iName)
	{
	cout<<"In bmw class parametrised constructor"<<endl;
	this->iName=iName;
	}
	//Destructor of bmw class
	~bmw()
	{
	cout<<"bmw class destructor"<<endl;
	}
};
class audi:public car
{
int inumofseats;
public:
	//constructor of audi class
	audi()
	{
	cout<<"audi class constructor"<<endl;
	}
	//Parameterised constructor
	bus(int inumofseats)
	{
	cout<<"audi parrametrise constructor"<<endl;
	this->inumofseats=inumofseats;
	}
	//destructor of audi class
	~audi()
	{
	cout<<"Audi destructor"<<endl;
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
	car vl(4);
	bmw cl("nano");
	bmw c2;
	audi bl(20);
	audi b2;
	}
}
	
