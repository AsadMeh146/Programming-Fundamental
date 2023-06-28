#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
	fstream newfile;
    string length,width,radius,name,age,balance,percentincrease,letter;
    newfile.open("inData",ios::in);
    while(getline(newfile,length,' ')){
    getline(newfile,width);
    getline(newfile,radius);
    getline(newfile,name,' ');
    getline(newfile,age);
    getline(newfile,balance,' ');
    getline(newfile,percentincrease);
    getline(newfile,letter);
    cout<<length<<endl;
    cout<<width<<endl;
    cout<<radius<<endl;
    cout<<name<<endl;
    cout<<age<<endl;
    cout<<balance<<endl;
    cout<<percentincrease<<endl;
    cout<<letter<<endl;
    }
    newfile.close();
}