#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
	fstream newfile;
    string number;
 	newfile.open("numbers.txt",ios::in);
	while(getline(newfile,number)){
	int value=stoi(number);
	for(int i=0;i<value;i++){
	cout<<"Hello World"<<endl;
	}
	cout<<endl;
    }
newfile.close();
}
	
