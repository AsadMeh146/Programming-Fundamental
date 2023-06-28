#include <iostream>
using namespace std;
int main(){
	int value1;
	int value2;
	int value3;
	cout<<"Enter Your 1st Value : ";
	cin>>value1;
	cout<<"Enter Your 2nd Value : ";
	cin>>value2;
	cout<<"Enter Your 3rd Value : ";
	cin>>value3;
	if(value1 > value2 && value1 > value3){
		cout<<value1<<" Is the largest number "<<endl;
	}
	else if(value2 > value1 && value2 > value3){
		cout<<value2<<" Is the largest number "<<endl;
	}
	else if(value3 > value2 && value3 > value1){
		cout<<value3<<" Is the largest number "<<endl;
	}
}

