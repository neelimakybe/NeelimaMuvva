/*
Program Name:Demonstration of constructors and operator overloading in c++
Author Name:Neelima Muvva
Date:23-04-2020
File Name:case6.cpp
*/
#include<iostream>
  
#include<string.h>
  
using namespace std;

 
class Student
{
  
 
int *iRollno;
 char fName[20]; 
 
char cName[20];
  
char lName[20];

public:
 
    //constructor of student class
    
Student ()
  {
    
 
cout << "Called Constructor";
  
 
} 
 
    //parameterised constructor of student class 
    
Student (int *ino, char *cname)
  {
    
 
cout << "Called Constructor";
    
 
iRollno = ino;
    
 
strcpy (cName, cname);
    
//strcpy (lName, lname);
  
 
} 
Student (char *fname,char *lname)
{
    strcpy(this->fName,fname);
    strcpy(this->lName,lname);
}
//overloading plus operator
void operator+ () 
  {
    
cout << "\nConcatenation: " << strcat (fName, lName);
  
} 
 
 
void assignValue (int *ino, char cname[])
  {
    
 
iRollno = ino;
    
 
strcpy (cName, cname);
  
 
} 
 
    //display function
  
void display ()
  {
    
 
cout << "RollNo " << *iRollno << endl;
    
 
cout << "Name" << cName;

 
} 
 
};


 
int
main (int argc, char *argv[])
{
  
 
if (argc == 2 && strcmp (argv[1], "--help") == 0)
    
 
    {
      
 
cout << "usage:./a.out" << endl;
    
 
}
  
 
  else
    
 
    {
      
 
Student obj;
      
 
int val = 30;
      
 
	//passing values through object
	
Student obj2 (&val, "hello");
      
 
char cname[20] = "NewStudent";
char fname[20]="muvva";  
char lname[20]="neelima";
obj.assignValue (&val, cname);
      
 
obj.display ();
      
 
obj2.display ();
      
Student s(fname,lname);
+s;
return 0;
    
 
}

 
}
