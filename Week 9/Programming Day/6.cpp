#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
	fstream newfile;
    fstream newfile2;
	string name;
    string marks1,marks2,marks3,marks4,marks5;
    float value1,value2,value3,value4,value5;
	float average=0;
	newfile.open("test.txt",ios::in);
	newfile2.open("testavg.txt",ios::app);
	while(getline(newfile,name,',')){
	getline(newfile,marks1,',');
	getline(newfile,marks2,',');
	getline(newfile,marks3,',');
	getline(newfile,marks4,',');
	getline(newfile,marks5);
	value1=stof(marks1);
	value2=stof(marks2);
	value3=stof(marks3);
	value4=stof(marks4);
	value5=stof(marks5);
	average=(value1+value2+value3+value4+value5)/5;
	cout<<"Student name : "<<name<<endl;
	cout<<"Marks of 1st subject "<<value1<<endl;
	cout<<"Marks of 2nd subject "<<value2<<endl;
	cout<<"Marks of 3rd subject "<<value3<<endl;
	cout<<"Marks of 4th subject "<<value4<<endl;
	cout<<"Marks of 5th subject "<<value5<<endl;
	cout<<"Avergae marks are : "<<average<<endl;
	newfile2<<average<<endl;
	}
	newfile.close();
    }

