#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream newfile;
	char words;
	int a_counter=0;
	int m_counter=0;
	newfile.open("AMCount.txt",ios::in);
    while(!newfile.eof()){
    	newfile.get(words);
    	if(words=='A' || words=='a'){
    	a_counter++;
	}
	if(words=='M' || words=='m'){
    	m_counter++;
	}
	}
	cout<<"A or a : "<<a_counter<<endl;
	cout<<"M or m : "<<m_counter<<endl;	
    newfile.close();
}
