
/*Program Name:This program defines the order of execution of constructor and destructor using virtual
Author Name:Neelima Muvva
File Name:case5b1.cpp
Date:11-04-2020
*/
#include<iostream>
using namespace std;
class car
{

public:
	car()
	{
	cout<<"car constructor invoked"<<endl;
	}
	virtual ~car()
	{
	cout<<"car destructor invoked"<<endl;
	}
};
class bmw:protected car
{
	public:
	bmw()
	{
	cout<<"bmw constructor"<<endl;
	}
	~bmw()
	{
	cout<<"bmw desctructor"<<endl;
	}
};
int main(int argc,char  **argv)
{
	 
    if(argc==2)
	{
	cout<<"usage: ./a.out"<<endl;
	cout<<"This program gives description of orderof constructor and destructors execution with virtual"<<endl;
	}
    else
	{
	car *c=new car();
	bmw *b=new bmw();
	}
}
