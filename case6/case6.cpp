
/*
Program Name:This Program has two private member variables  int* and char[20] and all the neccessary constructors and operator overloading and display function which will display the int and char variables.
Author Name:Neelima Muvva
File Name:case6.cpp
Date:11-04-2020
*/
#include<iostream>
#include<string.h>
using namespace std;
class Student{
	int *iRollno;
	char cName[20];
	public:
	//constructor of student class
		Student(){
			cout<<"Called Constructor";
		}
	//parameterised constructor of student class 
		Student(int *ino,char *cname){
			cout<<"Called Constructor";
			iRollno=ino;
			strcpy(cName,cname);
		}
		void assignValue(int *ino,char cname[]){
			iRollno=ino;
			strcpy(cName,cname);
		}
	//display function
		void display(){
			cout<<"RollNo "<<*iRollno<<endl;
			cout<<"Name"<<cName;
		}
};
   int main(int argc,char *argv[]){
       if(argc==2)
       {
        cout<<"usage:./a.out"<<endl;
       }
       else
       {
       Student obj;
       int val=30;
	       //passing values through object
       Student obj2(&val,"hello");
    char cname[20]="NewStudent";
	obj.assignValue(&val,cname);
	obj.display();
	obj2.display();
	return 0;
}
}
