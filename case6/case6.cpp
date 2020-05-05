
/*Program Name:This program demonstrates use of constructors destructors and operator overloading in c++
Author Name:Neelima Muvva
Date:20-04-2020
File Name:case6.cpp
*/

#include<iostream>
#include<string.h>
using namespace std;
class Student
{
    private:
    int *irollno;
    char *stdname;
    
    public:
    Student()
    {
        cout<<"Called default constuctor";
    }
    Student(int r, char *name)
    {
        irollno=new int();
        *irollno=r;
        stdname=name;
    }
    Student & operator=(const Student &t)
    { 
        if(this!=&t) 
        *irollno=*(t.irollno);
        strcpy(stdname,t.stdname);
        return *this; 
    }
    Student (Student const &s2)
    {
        irollno=new int();
        *irollno=*s2.irollno;
        stdname=s2.stdname;
    }
    ~Student()
    {
        delete irollno;
    }
    void display()
    {
        cout<<"Roll no:"<<*irollno<        cout<<"Student name:"<        
    }
};
    int main()
    {
    Student s1(1,"Neelima");
    Student s2(s1);     //copy constructor
    Student s3=s1;      //assignment operator overloading
    s1.display();
    s2.display();
    s3.display();
    return 0;
}
