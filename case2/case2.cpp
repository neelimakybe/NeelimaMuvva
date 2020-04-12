/*Name of the Program:CPP Program to find sum of squares of first n natural numbers
Author Name:Neelima Muvva
File Name:case2.cpp
Date:10-04-2020
*/


#include<iostream>

#include<stdlib.h>

using namespace std;

//Returns the  value of sum of the squares  of first n natural numbers 



int square(int iW)

{

int iOu;

iOu= (iW*(iW+1)*(2*iW+1))/6;

cout<<"output"<<iOu<<endl;

}



int main(int argc,char*argv[])

{

int iM;

if(argc==2)

cout<<"usage:./a.out arg1"<<endl;

else

{

cin>>iM;

square(iM);

}

}



