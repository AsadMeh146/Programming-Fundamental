#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;
void signup();
void signin();
fstream newfile;
string name1,name2,name3,name4;
string pin1,pin2,pin3,pin4;
int main()
 { 	
 	int option=0;
 	while(option!=3){ 
    cout<<"*******************"<<endl;
    cout<<"Sign in and Sign Up System "<<endl;
    cout<<"*******************"<<endl;
    cout<<"1 : Sign up  "<<endl;
    cout<<"2 : Sign in  "<<endl;
    cout<<"3 : Exit "<<endl;
    cout<<endl;
    cout<<"Enter your option :  ";
    cin>>option;
    system("CLS");
    if(option==1){
    signup();
}
    if (option==2){
    signin();
}
}
}
void signup(){
	cout<<"Enter Username : ";
    cin>>name1;
    cout<<"Enter Password : ";
    cin>>pin1;
    cout<<"User Added Successfully.....";
    getch();
    system("CLS");
    cout<<"Enter Username : ";
    cin>>name2;
    cout<<"Enter Password : ";
    cin>>pin2;
    cout<<"User Added Successfully.....";
    getch();
    system("CLS");
    cout<<"Enter Username : ";
    cin>>name3;
    cout<<"Enter Password : ";
    cin>>pin3;
    cout<<"User Added Successfully.....";
    getch();
    system("CLS");
	newfile.open("newFile1.txt",ios::out);
	newfile<<name1<<",";
	newfile<<pin1;
	newfile<<endl;
	newfile<<name2<<",";
	newfile<<pin2;
	newfile<<endl;
	newfile<<name3<<",";
	newfile<<pin3;
	newfile.close();
}
void signin(){
	string name;
	string pass;
	cout<<"Enter Username : ";
    cin>>name4;
    cout<<"Enter Password : ";
    cin>>pin4;
	newfile.open("newFile1.txt",ios::in);
    while(getline(newfile,name,',')){
  	getline(newfile,pass);
  	  if(name4==name && pin4==pass){
  	 	cout<<"Logged in Successfully...... ";
  	 	getch();
  	 	system("CLS");
	}
	else if(name4!=name && pin4!=pass){
  	 	cout<<"Invalid username or password..... ";
  	 	getch();
  	 	system("CLS");
  }    
  }
	newfile.close();
	system("CLS");
}


