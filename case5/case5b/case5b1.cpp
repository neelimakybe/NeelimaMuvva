#include<iostream>
#include<string.h>
using namespace std;
class car
{

public:
	car()
	{
	cout<<"car constructor invoked"<<endl;
	}
	//virtual destructor of car
	virtual ~car()
	{
	cout<<"car destructor invoked"<<endl;
	}
};
class bmw:public car
{
	public:
	bmw()
	{
	cout<<"bmw constructor"<<endl;
	}
	//virtual destructor of bmw class
	~bmw()
	{
	cout<<"bmw desctructor"<<endl;
	}
};
int main(int argc,char  **argv)
{
	 
       if(argc == 2 && strcmp(argv[1], "--help")==0)
	{
	
	cout<<"This program gives description of orderof constructor and destructors execution with virtual"<<endl;
	}
    else
	{
	    //Invoking constructors and virtual destructors creating pointers to the objects.
	bmw *b=new bmw();
	car *c=b;
	delete c;
	}
}
