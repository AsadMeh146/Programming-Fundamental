#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
	fstream newfile;
    string data;
    string length,width,radius,name,age,balance,percentincrease,letter;
    float area,parameters,area_circle,circumference,afterbalance;
    char word;
	newfile.open("inData.txt",ios::in);
    getline(newfile,length,' ');
    getline(newfile,width); 
    getline(newfile,radius);
    getline(newfile,name,' ');
    getline(newfile,age);
    getline(newfile,balance,' ');
    getline(newfile,percentincrease);
    getline(newfile,letter);
    float real_length=stof(length);
    float real_width=stof(width);
    float real_radius=stof(radius);
    float real_balance=stof(balance);
    float real_percentincrease=stof(percentincrease);
    word=letter[0];
    word++;
    area=real_length*real_width;
    parameters=2*(real_length+real_width);
    area_circle=3.14*(real_radius*real_radius);
    circumference=2*(3.14*real_radius);
	afterbalance=real_balance*(real_percentincrease/100);
    afterbalance=afterbalance+real_balance;
    cout<<"Rectangle "<<endl;
	cout<<"Length : "<<real_length<<endl;
    cout<<"Width : "<<real_width<<endl;
    cout<<"Area : "<<area<<endl;
    cout<<"Parameter : "<<parameters<<endl;
	cout<<"Circle "<<endl;
	cout<<"Radius : "<<real_radius<<endl;
    cout<<"Area : "<<area_circle<<endl;
    cout<<"Circumference : "<<circumference<<endl;
    cout<<"Name : "<<name<<endl;
    cout<<"Age : "<<age<<endl;
    cout<<"Begnining balance : "<<real_balance<<endl;
    cout<<"Percentage increase : "<<real_percentincrease<<endl;
    cout<<"After Balance : "<<afterbalance<<endl;
    cout<<"The letter which came after A in ASCI is : "<<word<<endl;
    newfile.close();
}
