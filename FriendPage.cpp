/*Purpose of the program:This program is to Add,Delete,Edit,Search,Display the user and to add a friend to the users.
Author Name:Neelima Muvva
Concept Used:Standard Template Language(MultiMap)
Date:12-05-2020
*/
#include<iostream>
#include<map>
#include<stdlib.h>
#include<string.h>
using namespace std;
class Friendpage
{


private:
  string sname;
  string smail;
  //Declaring multimaps Userslist and Friendslist
    multimap < string, string > userslist, friendslist;
    multimap < string, string >::iterator itr;
public:
/*Function Name: addUser
Return type:void
Arguments:no
Author Name:Neelima Muvva
Usage of function:This Function is used to add the user*/
  void addUser ()
  { 
      
          
      	string *sname = new string();
		string *smail = new string();
	
    char opt;
    do{
    cout << "Enter user name";
    cin>>*sname;
    cout << "Enter mail id";
    cin>>*smail;
    //By using insert method adding user to the userslist .
    userslist.insert (pair < string, string > ({*sname, *smail}));
cout<<"Do you want to add more users y or n"<<endl;
cin>>opt;
    
    }while(opt=='y');
    delete sname;
    delete smail;
  }
  /*
  Function Name:deleteUser
  Return type:void 
  parameters:no
  Author Name:Neelima Muvva
  Usage of function:This function is used to delete the user
  */
  
  void deleteUser ()
  {
	string *sname = new string();

	bool search=false;
    cout << "Enter the name to delete";
    cin>>*sname;
    for (itr = userslist.begin (); itr != userslist.end (); ++itr)
      {
          //Checking whether the user present in the userlist or not.
	if (itr->first == *sname)
	  {
	      search=true;
	      //Deleting user by using erase method of map.
	    userslist.erase (*sname);
	    cout<<"Deleted successfully"<<endl;
	  }
      }
      if(search==false)
      {
          cout<<"user is not found"<<endl;
      }

  }
  /*
  Function Name:editUser
  Return type:void
  Parameters:no
  Author Name:Neelima Muvva
  Usage of function:This function is used to edit the user in the user list.
  */
  void editUser ()
  {
      bool search=false;
      	string *sname = new string();
		string *smail = new string();
	
    cout << "enter name to edit details";
    cin>>*sname;
    for (itr = userslist.begin (); itr != userslist.end (); itr++)
      {
	if (itr->first == *sname)
	  {
	      search=true;
	    userslist.erase (*sname);
	    userslist.erase (*smail);

	    cout << "Enter user name and mail id";
	    cin>>*sname;
	    cout << "Enter mail id";
	    cin>>*smail;
	    //Updating the values by erasing the old values.
	    userslist.insert (pair < string, string > ({*sname, *smail}));
	    cout << "NAme has changed successfully";

	  }
      }
      if(search==false)
      {
          cout<<"User doesnt exist"<<endl;
      }
     delete sname;
     delete smail;

  }
  /*
  Function Name:searchUser
  Return Type:void
  Parameters:no
  Author Name:Neelima Muvva
  Usage of function:This function is used to know whether the user is present in the userlist or not
  */
  void searchUser ()
  {     bool search=false;
      	string *sname = new string();
		string *smail = new string();
	
    cout << "Enter the username to search";
    cin>>*sname;
    for (itr = userslist.begin (); itr != userslist.end (); itr++)
      {
	if (itr->first == *sname)
	{
	  cout << "data present" << endl;
      search=true;	
}
}
if(search==false)
	  cout << "Data is not present" << endl;


      


  }
  /*
  Function Name:displayUser
  Return type:void
  Parameters:no
  Author Name:Neelima Muvva
  Usage of function:This function is used to display the data in the userlist
  */
  void displayUser ()
  {
      cout <<"User Name:"<<"\t"<<"mail id"<<endl;
    
    for (itr = userslist.begin (); itr != userslist.end (); itr++)
      {
	 
	cout<<itr->first<<"\t\t"<< itr->second<<"\n";
      }


  }
  /*
  Function Name:addFriend
  Return type:void
  Parameters:no
  Author Name:Neelima Muvva
  Usage of function:This program is used to add friend to the user.
  */
  void addFriend ()
  {
      	string *sname = new string();
		string *smail = new string();
	
      char opt;
    

    cout << "Enter your user name";
    cin>>*sname;
    for (itr = userslist.begin (); itr != userslist.end (); itr++)
      {
	if (itr->first == *sname)
	  {
	      //Adding the user to friends list.
	    friendslist.insert (pair < string, string > (itr->first, itr->second));

	  }
	  else
	  {
	      cout<<"User name does not exist"<<endl;
	  }
      }
  do{    
      cout<<"Users List"<<endl;
      //Displaying the users  list to know whom they can add as a friend.
      displayUser();
      cout<<endl;
      cout<<"Enter name of the person whom you want to add as a friend"<<endl;
      
      
      cin>>*sname;
      for(itr=userslist.begin();itr!=userslist.end();itr++)
      {
          if(itr->first==*sname)
          {
              friendslist.insert(pair<string,string> (itr->first,itr->second));
          }
      }
      cout<<"Do you want to add more friends(y/n)"<<endl;
      cin>>opt;
    }while(opt=='y');
  
    cout<<" Your Friends list"<<endl;
    //Displaying the friends list.
    cout<<"User Name"<<"\t"<<"Mail id"<<endl;
    for (itr = friendslist.begin (); itr != friendslist.end (); itr++)
      {
cout<<itr->first<<"\t\t"<< itr->second<<"\n";      }
delete sname;
delete smail;
  }     
};

int
main (int argc,char* argv[])
{

  if (argc == 2)
    {
      if (argc == 2 && strcmp (argv[1], "--help") == 0)
	{
	  cout << "usage:./a.out" << endl;
	  cout << "select required option" << endl;
	}
    }
  else
    {


      int choice;
      
      Friendpage fp;
      while(1)
      {
      cout<<"1.AddUser"<<"\n"<<"2.Delete User"<<"\n"<<"3.EditUser"<<"\n"<<"4.SearchUser"<<"\n"<<"5.DisplayUer"<<"\n"<<"6.AddFriend"<<"\n"<<"7.Exit"<<endl;	
      
	  cout << "enter an option";
	  cin >> choice;
       
	  switch (choice)
	    {
	    case 1:
	      fp.addUser ();
	      break;
	    case 2:
	      fp.deleteUser ();
	      break;
	    case 3:
	      fp.editUser ();
	      break;
	    case 4:
	      fp.searchUser ();
	      break;
	    case 5:
	      fp.displayUser ();
	      break;
	    case 6:
	      fp.addFriend ();
	    case 7:
	      exit (0);


	    }
	
    }
}
}