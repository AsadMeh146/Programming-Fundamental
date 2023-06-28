#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
	fstream newfile;
    string number;
 	newfile.open("integers.txt",ios::in);
	while(getline(newfile,number)){
	    int value=stof(number);
	for(int i=1;i<=10;i++){
		cout<<value <<"*" << i << "=" << value * i <<endl;
	}
	cout<<endl;
	}
	newfile.close();
}