/* Program Name:This program is used to describe about the scope of variables
Author Name:Neelima Muvva
File Name:case3a.cpp
Date:09-04-2020
*/
#include<iostream>
using namespace std;
//Global variable
int g;
int main (int argc,char *argv[]) {
    if(argc==2)
    {
        cout<<"usage:./a.out"<<endl;
    }
    else
    {
        //local variable
   int a=10,b=15;
   g = a + b;
   cout << g;
   return 0;
}
}