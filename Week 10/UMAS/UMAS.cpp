#include <iostream>
#include <fstream>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;
void Welcome();
void addstudentrecord();
void readstudentrecord();
void viewstudentrecord();
string getrecord(string record, int x);
int idx=0;
int a=0;
int d=0;
int s=0;
string studentname[5];
string schoolname[5];
string collegename[5];
float matricmarks[5];
float firstyearmarks[5];
float ecatmarks[5];
float age[5];
string studentname2[5];
string schoolname2[5];
string collegename2[5];
float matricmarks2[5];
float firstyearmarks2[5];
float ecatmarks2[5];
float age2[5];
int main()
{
	
	int option = -1;
	while (option != 3)
	{
		Welcome();
		cout << endl;
		cout << "1. Add Student Record  " << endl;
		cout << "2. View Student Record  " << endl;
		cout << "3. Exit " << endl;
		cout << "Select Your Option : ";
		cin >> option;
		system("CLS");
		if (option == 1)
		{
			addstudentrecord();
		    readstudentrecord();
		}
		if (option == 2)
		{
			viewstudentrecord();
		    _getch();
	        system("CLS");
		}
	}
}
void Welcome()
{
	cout << "*******" << endl;
	cout << "Welcome To University Admission Management System" << endl;
	cout << "*******" << endl;
}
void addstudentrecord()
{
	Welcome();
	fstream file;
	file.open("file1.txt",ios::out);
	cout << "Enter Student Name : ";
	cin >> studentname[d];
	file << studentname[d] << ",";
	cout << "Enter Student Age : ";
	cin >> age[d];
	file << age[d] << ",";
	cout << "Enter School Name : ";
	cin >> schoolname[d];
	file <<schoolname[d] << ",";
	cout << "Enter Student Matric Marks : ";
	cin >> matricmarks[d];
	file << matricmarks[d] << ",";
	cout << "Enter College Name : ";
	cin >> collegename[d];
	file << collegename[d] << ",";
	cout << "Enter Student Inter Marks : ";
	cin >> firstyearmarks[d];
	file << firstyearmarks[d] << ",";
	cout << "Enter Student Ecat Marks : ";
	cin >> ecatmarks[d];
	file << ecatmarks[d] << ","<<endl;
	a=d;
	d++;
	getch();
	system("CLS");
	file.close();
}
void readstudentrecord()
{
	fstream file;
	file.open("file1.txt", ios::in);
	string record;
	while (getline(file, record))
	{
        studentname2[idx] = getrecord(record, 0);
		age2[idx]= stof(getrecord(record, 1));
		schoolname2[idx]= (getrecord(record, 2));
		matricmarks2[idx] = stof(getrecord(record, 3));
		collegename2[idx] = (getrecord(record, 4));
		firstyearmarks2[idx] = stof(getrecord(record, 5));
		ecatmarks2[idx] = stof(getrecord(record, 6)); 
		s=idx;
		idx++;
	}
	file.close();
}
void viewstudentrecord(){
	Welcome();
		cout << endl;
	    cout << "Record Of Students is written below....." << endl;
	    cout << "Student Name\t" << "Age\t"<< "School Name\t"  << "Matric Marks\t" << "College Name\t"<< "Inter Marks\t" << "Ecat Marks\t" <<  endl;
	    for (int i = 0; i <= a; i++)
	    {
 		cout << studentname2[i] << "\t" << age2[i] << "\t" << schoolname2[i] << "\t" << matricmarks2[i] << "\t" <<collegename2[i] << "\t" <<firstyearmarks2[i] << "\t" <<ecatmarks2[i] << "\t" <<endl;
	    }
}
string getrecord(string record, int x)
{
	int commas = x;
	int commasfound = 0;
	string store = "";
	int f = 0;
	while (commasfound < 7 && f < record.length())
	{
		char c = record[f];
		if (c == ',')
		{
			commasfound = commasfound + 1;

		}
		else if (commasfound == x)
		{
			store = store + c;
		}
		f = f + 1;
	}
	return store;
}
