
   

/*Program Name:This program illustrates purpose and difference in public,private and protected access specifiers.

Author Name:Neelima Muvva

File Name:case4.cpp

Date:08-04-2020

*/

#include<iostream> 

using namespace std;

class base

{

 	private:

        int ix;

 	protected:

 	    int iy;

 	public:

 	    int iz;

 	base() //constructor to initialize data members

 	{

 	   ix = 1;

 	   iy = 2;

 	   iz = 3;

 	}

};

class derive: private base

{

 	//y and z becomes private members of class derive and x remains private

 	public:

 	    void showdata()

 	    {

 	       cout << "x is not accessible" << endl;

               cout << "value of y is " << iy << endl;

               cout << "value of z is " << iz << endl;

 	    }

};

int main(int argc,char *argv[])
{
   if(argc == 2 && strcmp(argv[1], "--help")==0)
{
    cout<<"Main purpose of this rogram is illustration of Accesss specifiers";
}
else

{

     derive a; //object of derived class

     a.showdata();

     //this function prints only y and z since x is private it cant be accessed outside of the class

     //But y and z are accessed because they are private members of same class i.e.,derived class.

     return 0;

} 	

}
