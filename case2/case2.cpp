/*Name of the Program:CPP Program to find sum of squares of first n natural numbers
Author Name:Neelima Muvva
File Name:case2.cpp
Date:10-04-2020
*/


#include<iostream>

#include<stdlib.h>
#include<string.h>

using namespace std;

//Returns the  value of sum of the squares  of first n natural numbers 



void square(int iW)

{

int iOu;

iOu= (iW*(iW+1)*(2*iW+1))/6;

cout<<"output"<<iOu<<endl;

}



int main(int argc,char*argv[])

{

int iM;

   if(argc == 2 && strcmp(argv[1], "--help")==0)
   {
cout<<"Main purpose of this program is to give the size and type of the given value"<<endl;
   }
else

{

cin>>iM;

square(iM);

}

}



