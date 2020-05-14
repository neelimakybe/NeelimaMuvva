
/* Program name:This program is used to process the matrix row wise,column wise,Diagonal wise and if the number is repeated moves to the left hand side and place s"*" in empty space.

File Name:matrix.cpp
Author Name:Neelima Muvva
Date:14-05-2020
*/
#include<iostream>
using namespace std;
void getarray(char a[10][10],int noofrows,int noofcolumns);
int replaceFunc(char a[10][10],int noofrows,int noofcolumns,int check);
void transpose(char a[10][10],char trans[10][10],int noofrows,int noofcolumns);
int leftdiagonal(char a[10][10],int noofrows,int noofcolumns,int check);
int rightdiagonal(char a[10][10],int noofrows,int noofcolumns,int check);
void display(char a[10][10],int noofrows,int noofcolumns);
int main(int argc,char* argv[])
{
  
    if(argc==2)
    {
        if(argc == 2 && strcmp(argv[1], "--help")==0)
        {
	    cout<<"usage:./a.out"<<endl;
            cout<<"select required option"<<endl;
        }
    }else
    {
    
    char a[10][10];
    char trans[10][10],temp[10][10];
    int noofrows,noofcolumns,indexofrow,indexofcolumn,option;
    int check=0;
    //char b[10][10];
    cout<<"Enter the value of m and n : ";
    cin>>noofrows>>noofcolumns;
    getarray(a,noofrows,noofcolumns);
    cout<<endl;
    cout<<"***Options***"<<endl;
    cout<<"1. Row Matrix"<<endl<<"2. Column Matrix"<<endl<<"3. Left Diagonal Matrix"<<endl<<"4.Right Diagonal Matrix";
    cout<<endl<<"Choose your option : ";
    cin>>option;
    cout<<"Entered Matrix :"<<"\n";
    display(a,noofrows,noofcolumns);
  //Switch case to select in which way matrix should be processed.
    switch(option){
        case 1:
                cout<<"Row wise * matrix"<<"\n";
                check = replaceFunc(a,noofrows,noofcolumns,check);
                if(check==0)
                {
                    cout<<"There is No Row wise sequence in Matrix...."<<endl;
                }
                display(a,noofrows,noofcolumns);
                break;
        
        case 2:
                cout<<endl<<"Column wise * matrix"<<"\n";
                transpose(a,trans,noofrows,noofcolumns);
                check = replaceFunc(trans,noofrows,noofcolumns,check);
                //char temp[10][10]=trans
                transpose(trans,temp,noofrows,noofcolumns);
                if(check==0)
                {
                    cout<<"There is No Column wise sequence in Matrix...."<<endl;
                }
                display(temp,noofrows,noofcolumns);
                break;
         
        case 3:
                cout<<endl<<"Diagonal wise Matrix"<<endl;
                check = leftdiagonal(a,noofrows,noofcolumns,check);
                

                if(check==0)
                {
                    cout<<"There is No Diagonal wise sequence in Matrix...."<<endl;
                }
                display(a,noofrows,noofcolumns);
                break;
        case 4:
                
                cout<<"Right Diagonal Matrix "<<"\n";
                check = rightdiagonal(a,noofrows,noofcolumns,check);
                if(check==0)
                {
                    cout<<"There is No Right Diagonal wise sequence in Matrix...."<<endl;
                }
                display(a,noofrows,noofcolumns);
                break;
        
        default:
        
                cout<<"Invalid Selection !!!!!!!"<<endl;
                break;
    }
    }
   
   
    
}
/*
Function Name:display
Return type:void
Parameters:Two dimensional array,number of rows and columns.
Author Name:Neelima Muvva
*/
void display(char a[10][10],int noofrows,int noofcolumns)
{
    int indexofrow,indexofcolumn;
     for(indexofrow=0;indexofrow<noofrows;indexofrow++)
    {
        for(indexofcolumn=0;indexofcolumn<noofcolumns;indexofcolumn++)
        {
            
            cout<<a[indexofrow][indexofcolumn]<<"\t";
        }
        cout<<endl;
    }
    
}
/*
Function Name:transpose
Usage of function :To find the transpose of a matrix
Return type:void
Parameters: Two two dimensional arrays,row count and column count.
Author Name:Neelima Muvva
*/
void transpose(char a[10][10],char trans[10][10],int noofrows,int noofcolumns)
{
    int indexofrow,indexofcolumn;
    //char trans[10][10];
    for(indexofrow=0;indexofrow<noofrows;indexofrow++)
    {
        for(indexofcolumn=0;indexofcolumn<noofcolumns;indexofcolumn++)
        {
            trans[indexofcolumn][indexofrow]=a[indexofrow][indexofcolumn];
        }
    }
    //return trans;
}
/*
Function Name:replaceFunc
Return Type:int
Parameters:Two dimensional array,row count,column count and check variable.
Usage of function:It returns a two dimensional array by moving the repeated numbers to left and replacing
empty spaces with *

Auhtor Name:Neelima Muvva
*/
int replaceFunc(char a[10][10],int noofrows,int noofcolumns,int check)
{
    
    
    //cout<<"in function";
    for(int indexofrow=0;indexofrow<noofrows;indexofrow++)
    {
        int indexofcolumn=1;
        int count=0;
        int noofcolumns1=noofcolumns;
        //cout<<"in row "<<i;
        int temp=a[indexofrow][0];
        while(indexofcolumn<noofcolumns1)
        {
            if(a[indexofrow][indexofcolumn]==temp)
            {
                count++;
                check++;
                int k=indexofcolumn;
                while(k<noofcolumns1-1)
                {
                    a[indexofrow][k]=a[indexofrow][k+1];
                    k++;
                }
                noofcolumns1--;
                if(a[indexofrow][indexofcolumn] != temp)
                {
                    temp=a[indexofrow][indexofcolumn];
                    indexofcolumn++;
                }
            }
            else
            {
                temp=a[indexofrow][indexofcolumn];
                indexofcolumn++;
            }
        }
        //cout<<"count :"<<c<<endl;
        while(count>0)
        {
            a[indexofrow][noofcolumns-count]='*';
            count--;
        }
        //cout<<endl;
    }
    return check;
}
/*
Function Name:leftdiagonal
Return type:int
Parameters:Two dimensional array,row count,column count and check variable.
Usage of function:It process the left diagonal of a matrix and moves the repeated elemnts ana placest
Author Name:Neelima Muvva
*/
leftdiagonal(char a[10][10],int noofrows,int noofcolumns,int check)
{
    int temp=a[0][0];
    int indexofrow,indexofcolumn,count;
    indexofrow=1;
    indexofcolumn=1;
    count=0;
    int noofrows1=noofrows,noofcolumns1=noofcolumns;
    while(indexofrow<noofrows1)
    {
        if(a[indexofrow][indexofcolumn]==temp)
        {
            //If the temp and next element matches count will be incremented. 
            count++;
            check++;
            int newindexofrow=indexofrow,newindexofcolumn=indexofcolumn;
            while(newindexofrow<noofrows1-1)
            {
                a[newindexofrow][newindexofcolumn]=a[newindexofrow+1][newindexofcolumn+1];
                newindexofrow++;
                newindexofcolumn++;
            }
            noofrows1--;
            if(a[indexofrow][indexofcolumn]!=temp)
            {
                temp=a[indexofrow][indexofcolumn];
                indexofrow++;
            }
        }
        else
        {
            temp=a[indexofrow][indexofcolumn];
            indexofrow++;
        }
    }
    //To store * in empty spaces
    while(count>0)
    {
        a[noofrows-count][noofcolumns-count]='*';
        count--;
    }
    return check;
}
/*
Function Name:rightdiagonal
Return type:int
Parameters:Two dimensional array,row count,column count and check variable.
Usage of function:It process the right diagonal of a matrix and moves the repeated elemnts ana placest
Author Name:Neelima Muvva
*/

int rightdiagonal(char a[10][10],int noofrows,int noofcolumns,int check)
{
    
    int temp=a[0][noofcolumns-1];
    int indexofrow,indexofcolumn,count;
    indexofrow=1;
    indexofcolumn=noofcolumns-2;
    count=0;
    int noofrows1=noofrows,noofcolumns1=noofcolumns;
    while(indexofrow<noofrows1)
    {
        if(a[indexofrow][indexofcolumn]==temp)
        {
            count++;
            check++;
            int newindexofrow=indexofrow,newindexofcolumn=indexofcolumn;
            while(newindexofrow<noofrows1-1)
            {
                a[newindexofrow][newindexofcolumn]=a[newindexofrow+1][newindexofcolumn-1];
                newindexofrow++;
                newindexofcolumn--;
            }
            noofrows1--;
            if(a[indexofrow][indexofcolumn]!=temp)
            {
                temp=a[indexofrow][indexofcolumn];
                indexofrow++;
                indexofcolumn--;
            }
        }
        else
        {
            temp=a[indexofrow][indexofcolumn];
            indexofrow++;
            indexofcolumn--;
        }
    }
    int row=noofrows-1;
    int column=0;
    while(count>0)
    {
        a[row][column]='*';
        count--;
        row--;
        column++;
    }
    return check;

}
/*
Function Name:getarray
Return type:void
Parameters:Two dimensional array,row count,column count.
Usage of function:This function is to read the matrix.
Auhtor Name:Neelima Muvva
*/
void getarray(char a[10][10],int noofrows,int noofcolumns)
{
    int indexofrow,indexofcolumn;
    for(indexofrow=0;indexofrow<noofrows;indexofrow++)
    {
        for(indexofcolumn=0;indexofcolumn<noofcolumns;indexofcolumn++)
        {
            bool check=true;
            cout<<"Enter ("<<indexofrow<<","<<indexofcolumn<<") value: ";
            cin>>a[indexofrow][indexofcolumn];
            while(check)
            {
                if(a[indexofrow][indexofcolumn]=='1' || a[indexofrow][indexofcolumn]=='0')
                {
                    check=false;
                }
                else
                {
                    cout<<"Pleas enter 0 or 1 only!!!"<<endl;
                    cout<<"Enter ("<<indexofrow<<","<<indexofcolumn<<") value: ";
                    cin>>a[indexofrow][indexofcolumn];
                }
            }
        }
    }
}
