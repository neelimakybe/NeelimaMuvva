/*Name of the program:this program describes about storage clases
Author:Neelima Muvva
filename:case3b.cpp
date:09-04-2020
*/
#include<iostream>
#include<string.h>
using namespace std;
static int sig=25; /*gobal variable*/
int iex;
class storage
{
public:
mutable int im;		//mutable variable
int in;
	//default constructor
 	storage()
	{
		im=78;
		in=45;
	}
};
/*function name:externstorage
return type:void
*/
//function definition externstorage
void externstorage()
{
extern int iex;
	cout<<"the default value of extern variable:"<<iex<<endl;
	iex=67;
	cout<<"the modified value of exatern variable:"<<iex<<endl;
}
/*function name:registerstorage
return type:void
*/
//function definition for staticstorage
void staticstorage()
{
 static int sib;
 
 cout<<"default value static storage class:"<<sib<<endl;
 static int sis=6; /*local static varaible*/	
 sis++;
 cout<<"enter the static value:";
 cout<<"the value local static variable:"<<sis<<endl;
 cout<<"the value global static variable:"<<sig<<endl;
}
/*function name:registerstorage
return type:void
*/
//function definition for registor storage
void registerstorage()
{
 register int ir;
 cout<<"default value register storage class:"<<ir<<endl;
 cout<<"enter registar value"<<endl;
 cin>>ir;
 cout<<"the value of register variable:"<<ir<<endl;
}
/*function name:autostorage
return type:void
*/
//function definition for autostorage
void 
autostorage()
{
	 int ia;	//declaring auto storage class variable
 cout<<"default value auto storage class:"<<ia<<endl;
  cout<<"enter auto variable"<<endl;
  cin>>ia;
  cout<<"the value of auto avariable:"<<ia<<endl;
}
int main(int argc,char **argv)
{
const storage y;  //declaration of object for class storage
y.im=678; 	  //accessing mutable storage class value
      if(argc == 2 && strcmp(argv[1], "-h")==0) //help command 
	{
		
		cout<<"This program gives understanding about all storage classes"<<endl;
	}
	else
	{
	autostorage();	//calling autostorage function
	registerstorage();	//calling registerstorage function
	
	staticstorage();	//calling staticstorage function
	staticstorage();	//calling staticstorage function
	externstorage();	//calling externstorage function
	cout<<"the value of mutable is:"<<y.im<<endl;//dispalying mutable value.
	}
}	
