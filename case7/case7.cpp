/*Program Name: This program is to add ,delete,search and display the data and store the data in file. 
File Name:case7.cpp
Author Name:Neelima Muvva
Date:19-04-2020
*/
#include<iostream>
#include<vector>
#include<fstream>
#include<stdlib.h>
#include<string.h>

using namespace std;

class Fileconfig{
    char Key[50];
    char Kittype[50];
    char Notesprogram[50];
    char Installtype[50];
    char partitionnumber[50];
    char showControllerstatuswindow[50];
    char servicename[50];
    char FaultRecovery_Build[50];
    char TimeZone[50];
    char DST[50];
    char DSTLAW[50];
    char FileDlgDirectory[50];
public:


//This function is to get the input values.

    void setkey()
    {
        cout<<"Enter key:";
        getchar();
        cin.get(Key,50,'\n');
    }


    void setKittype()
    {
        cout<<"Enter Kittype";
        getchar();
        cin.get(Kittype,50,'\n');
    }
    void setNotesprogram()
    {
        cout<<"Enter Notesprogram";
        getchar();
        cin.get(Notesprogram,50,'\n');
    }
    void setInstalltype()
    {
        cout<<"Enter Installtype";
        getchar();
        cin.get(Installtype,50,'\n');
    }
    void setpartitionnumber()
    {
        cout<<"Enter partitionnumber";
        getchar();
        cin.get(partitionnumber,50,'\n');
    }
    void setshowControllerstatuswindow()
    {
        cout<<"Enter showControllerstatuswindow";
        getchar();
        cin.get(showControllerstatuswindow,50,'\n');
    }
    void setservicename()
    {
        cout<<"Enter servicename";
        getchar();
        cin.get(servicename,50,'\n');
    }
    
    void setFaultRecovery_Build()
    {
        cout<<"Enter FaultRecovery_Build";
        getchar();
        cin.get(FaultRecovery_Build,50,'\n');
    }
    void setTimeZone()
    {
        cout<<"Enter TimeZone";
        getchar();
        cin.get(TimeZone,50,'\n');
    }
    void setDST()
    {
        cout<<"Enter DST";
        getchar();
        cin.get(DST,50,'\n');
    }
    void setDSTLAW()
    {
        cout<<"Enter DSTLAW";
        getchar();
        cin.get(DSTLAW,50,'\n');
    }
    void setFileDlgDirectory()
    {
        cout<<"Enter FileDlgDirectory";
        getchar();
        cin.get(FileDlgDirectory,50,'\n');
        
    }

//Thisfunctions are used to return the respective values.

    char* putkey()
    {
        return Key;
    }


    
    char* putKittype()
    {
        return Kittype;
    }
    
    char* putNotesprogram()
    {
        return Notesprogram;
    }
    char*  putInstalltype()
    {
        return Installtype;
    }
    char* putpartitionnumber()
    {
        return partitionnumber;
    }
    char* putshowControllerstatuswindow()
    {
        return showControllerstatuswindow;
    }
    char* putservicename()
    {
        return servicename;
    }
    char* putFaultRecovery_Build()
    {
        return FaultRecovery_Build;
    }
    char* putTimeZone()
    {
        return TimeZone;
    }
    char* putDST()
    {
        return DST;
    }
    char* putDSTLAW()
    {
        return DSTLAW;
    }
    char* putFileDlgDirectory()
    {
        return FileDlgDirectory;
    }
public:
    void print()
    {
        cout<<Key<<"\t"<<Kittype<<Notesprogram<<"\t"<<Installtype<<"\t"<<partitionnumber<<"\t"<<showControllerstatuswindow<<"\t"<<servicename<<"\t"<<FaultRecovery_Build<<"\t"<<TimeZone<<"\t"<<DST<<"\t"<<DSTLAW<<"\t"<<FileDlgDirectory<<"\t"<<endl;
    }
};

//This function is to remove the file.

void removefile()
{
    Fileconfig c;
    int Count;
    ifstream infile("notes.ini",ios::in);
    while(1)
    {
        //reading the contents in file
        infile.read((char*)&c,sizeof(c));
        Count++;
        //checking for end of file
        if(infile.eof())break;
    }
    if(Count==0)
    {
        cout<<"file is deleted"<<endl;
        //to remove file
        remove("notes.ini");
    }
}

//This function is to  search the data and modify the changes if needed.

int searchupdateconfig(vector<Fileconfig> &vec,char* option)
{
   Fileconfig c;
    vector<Fileconfig>:: iterator it;
    ofstream outfile("notes.ini",ios::trunc|ios::out);
    for(it=vec.begin();it!=vec.end();it++)
    {
        c=*it;
        if(strcmp(c.putkey(),option)==0)
        {
            //the value is been deleted
            vec.erase(it);
            cout<<"Enter kittype to update"<<endl;
            c.setKittype();
            //the new value is pushed into file
            vec.push_back(c);
    for(it=vec.begin();it!=vec.end();it++)
    {
        c=*it;
            outfile<<"key="<<c.putkey()<<"\nKittype="<<c.putKittype()<<"\nNotesprogram="<<c.putNotesprogram()<<"\nInstalltype="<<c.putInstalltype()<<"\npartitionnumber="<<c.putpartitionnumber()<<"\nshowControllerstatuswindow="<<c.putshowControllerstatuswindow()<<"\nservicename="<<c.putservicename()<<"\nFaultRecovery_Build="<<c.putFaultRecovery_Build()<<"\nTimeZone="<<c.putTimeZone()<<"\nDST="<<c.putDST()<<"\nDSTLAW="<<c.putDSTLAW()<<"\nFileDlgDirectory="<<c.putFileDlgDirectory()<<"\n";
        //the file again written with updated values
    }
	return 1;
    outfile.close();
}
}
}
//This function is to add data in to the file using vector.

void addconfig(vector<Fileconfig> &vec)
{
    Fileconfig c;
    vector<Fileconfig>:: iterator it;
    char choice='y';
    while(choice=='y' || choice=='Y')
    {
        ofstream outfile("notes.ini",ios::trunc|ios::out);
        c.setkey();
        if(searchupdateconfig(vec,c.putkey())==1)
            //checking for if the key is already present in the file or not
            cout<<"updated"<<endl;
        else
        {
        
            c.setKittype();
            c.setNotesprogram();
            c.setInstalltype();
            c.setpartitionnumber();
            c.setshowControllerstatuswindow();
            c.setservicename();
            c.setFaultRecovery_Build();
            c.setTimeZone();
            c.setDST();
            c.setDSTLAW();
            c.setFileDlgDirectory();
            vec.push_back(c);
            for(it=vec.begin();it!=vec.end();it++)
            {
                c=*it;
                
            outfile<<"key="<<c.putkey()<<"\nKittype="<<c.putKittype()<<"\nNotesprogram="<<c.putNotesprogram()<<"\nInstalltype="<<c.putInstalltype()<<"\npartitionnumber="<<c.putpartitionnumber()<<"\nshowControllerstatuswindow="<<c.putshowControllerstatuswindow()<<"\nservicename="<<c.putservicename()<<"\nFaultRecovery_Build="<<c.putFaultRecovery_Build()<<"\nTimeZone="<<c.putTimeZone()<<"\nDST="<<c.putDST()<<"\nDSTLAW="<<c.putDSTLAW()<<"\nFileDlgDirectory="<<c.putFileDlgDirectory()<<"\n";
            }
       }
        cout<<"Do you want to append configaration datta(y/n)?";
        cin>>choice;
        outfile.close();
    }
}

//This funcgtion is to delete the data in file.
void deleteconfig(vector<Fileconfig> &vec)
{
   char ckey[50];
    Fileconfig cn;
    vector<Fileconfig>:: iterator it;
    ofstream outfile("notes.ini",ios::trunc|ios::out);
    cout<<"Enter the key to delete:";
    getchar();
    cin.get(ckey,50,'\n');
    for(it=vec.begin();it!=vec.end();it++)
    {
        	cn=*it;
        if((strcmp(cn.putkey(),ckey)==0))
        {
            vec.erase(it);
            cout<<"Deleted"<<endl;
            break;
        }
    }
   removefile();
    for(it=vec.begin();it!=vec.end();it++)
	{
            cn=*it;
            outfile<<"key="<<cn.putkey()<<"\nKittype="<<cn.putKittype()<<"\nNotesprogram="<<cn.putNotesprogram()<<"\nInstalltype="<<cn.putInstalltype()<<"\npartitionnumber="<<cn.putpartitionnumber()<<"\nshowControllerstatuswindow="<<cn.putshowControllerstatuswindow()<<"\nservicename="<<cn.putservicename()<<"\nFaultRecovery_Build="<<cn.putFaultRecovery_Build()<<"\nTimeZone="<<cn.putTimeZone()<<"\nDST="<<cn.putDST()<<"\nDSTLAW="<<cn.putDSTLAW()<<"\nFileDlgDirectory="<<cn.putFileDlgDirectory()<<"\n";
        
	}
    outfile.close();
}

//This function is to display then data in file

void displayconfig()
{
    Fileconfig cg;
    ifstream infile("notes.ini",ios::in);
    char info[1000];
    while(!infile.eof())
    {
        infile.getline(info,1000);
        cout<<info<<endl;
    }
}

int main(int argc,char* argv[])
{
    if(argc==2)
    {
        if(argc == 2 && strcmp(argv[1], "--help")==0)
        {
	    cout<<"usage:./a.out"<<endl;
            cout<<"select required option"<<endl;
        }
    }
    else
    {
        vector<Fileconfig> vec;
        vector<Fileconfig>:: iterator it;
        char ch;
        while(1)
        {
            cout<<"Select your option:"<<endl<<" 1.add"<<endl<<" 2.delete"<<endl<<" 3.display"<<endl<<" 4.exit"<<endl;
            cin>>ch;
            switch(ch)
            {
                case '1':
                        addconfig(vec);
                        break;
                case '2':
                        deleteconfig(vec);
                        break;
                case '3':
                        displayconfig();
                        break;
		case '4':
			exit(0);
			break;
                default:
                        return 0;
            }
        }
    }
return 0;
}
