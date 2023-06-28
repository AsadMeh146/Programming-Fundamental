#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream newfile;
	string admission_no;
	string name;
	string marks;
	float percentage;
	int counter=0;
	newfile.open("STUDENT.txt",ios::in);
    while(getline(newfile,admission_no,',')){
    (getline(newfile,name,','));
    (getline(newfile,marks));
    percentage=stof(marks);
	if(percentage>=75){
    	counter++;
	}
	cout<<"Admission Number : "<<admission_no<<endl;
    cout<<"Name : "<<name<<endl;
    cout<<"Percentage : "<<marks<<endl;
}
    cout<<"No. of student above 75% are : "<<counter<<endl;
newfile.close();
}
