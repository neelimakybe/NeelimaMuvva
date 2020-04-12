
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
	int *Rollno;
	char Name[20];
	public:
		Student(){
			cout<<"Called Constructor";
		}
		Student(int *no,char *name){
			cout<<"Called Constructor";
			Rollno=no;
			strcpy(Name,name);
		}
		void assignValue(int *no,char name[]){
			Rollno=no;
			strcpy(Name,name);
		}
		void display(){
			cout<<"RollNo "<<*Rollno<<endl;
			cout<<"Name"<<Name;
		}
};
   int main(){
       Student obj;
       int val=30;
       Student obj2(&val,"hello");
    char name[20]="NewStudent";
	obj.assignValue(&val,name);
	obj.display();
	obj2.display();
	return 0;
}
