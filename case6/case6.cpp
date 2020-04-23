/*Program Name:This program demonstrates use of constructors destructors and operator overloading in c++
Author Name:Neelima Muvva
Date:20-04-2020
File Name:case6.cpp
*/
#include<iostream>
#include<string.h>
using namespace std;
class student
{
private:
  //integer pointer declaration
  int *iRollno;
  //character array declaration                                                                   
  char cName[20];
public:
  //default constructor
    student ()
  {
    cout << "default constructor is called" << endl;
  }
  //parameterized constructor
  student (char *cStudname)
  {
    strcpy (cName, cStudname);
    cout << "parameterized constructor is called" << endl;

  }
  void display ()
  {
    cout << "student name:" <<cName<< endl;

  }
  //+ operator overloading 
  student operator+ (student s)
  {
    student temp = cName;
    strcat (temp.cName, s.cName);
    return temp;
  }
  //student destructor
  ~student ()
  {
    cout << "student destructor" << endl;

  }
};

int
main (int argc, char *argv[])
{
 
      //if loop for comparing the input string with "-h"      
      if(argc == 2 && strcmp(argv[1], "--help")==0)
        {

	
	  cout << "USAGE" << endl;
	  cout <<
	    " This program uses integer pointer,character array and describes them usingconstructor/destructor/operator overloading and member function"
	    << endl;

	}
    
  else
    {
      //calling parameterized constructor
      student obj ("  Neelima");
      student obj1 ("	Muvva");
      student obj2;
      //concatenationg two objects
      obj2 = obj1 + obj;
      obj2.display ();

    }
}
