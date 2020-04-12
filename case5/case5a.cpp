/*Name of the Program:This program tells the different ways to initialize private data members.
Author Name:Neelima Muvva
Filename:case5a.cpp
Date:09-04-2020
*/
#include <iostream>
using namespace std;
class Circle
{
private: 
              int ir;
public:
			Circle(int ir=10){
				this->ir=ir;
			}
              void area(double ii)
              {
                   ir=ii;
                   double da=3.14*ir*ir;
                   cout<<"Area:"<<da;             }
              void area()
              {
                   
                   double da=3.14*ir*ir;
                   cout<<"Area: "<<da;                }
};
class Distance
{
    private:
        int imeter; 
    public:
        Distance(): imeter(0) { }
        //friend function
        friend int addFive(Distance);
};
// friend function definition
int addFive(Distance d)
{
    //accessing private data from non-member function
    d.imeter += 5;
    return d.imeter;
}
int main(int argc,char **argv)
{
          if(argc==2)
          {
         cout<<"usage: ./case5a.exe"<<endl;
         cout<<"This program gives description of initializing private data members in different ways i.e.,Scope resolution operator,indirect initialisation and friend function"<<endl;
          }
         else
         {
         Circle obj;
         obj.area();
         obj.area(8);
         Distance D;
         cout<<"Distance: "<< addFive(D);
         return 0;
         }
}

