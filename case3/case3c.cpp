/*Program Name:This Program shows the use of Modifiers
Author Name:Neelima Muvva
File Name:case3c.cpp
Date:09-04-2020
*/
#include<iostream>
#include<string.h>
using namespace std;
void display()//Function Declaration
{
    int numb;
    short int sint;
    unsigned short usint;
    signed short ssint;
    long int lint;
    unsigned long uslint;
    cout<<"                     MODIFIER TYPES                         "<<endl;
    cout<<"Enter int value: ";
    cin>>numb;
    sint=usint=ssint=lint=uslint=numb;
    cout<<"short int   : "<<sint<<endl;
    cout<<"unsigned short   : "<<usint<<endl;
    cout<<"signed short: "<<ssint<<endl;
    cout<<"long int         : "<<lint<<endl;
    cout<<"unsigned long  : "<<uslint<<endl;
}
int main(int argc,char *argv[])
{
    if(argc == 2 && strcmp(argv[1], "-h")==0) //help command
    {
        cout<<"The main purpose of this program is to how to use & Declare Types of Modifiers"<<endl;
    }
    else
    {
        display();
    }
    return 0;
}
