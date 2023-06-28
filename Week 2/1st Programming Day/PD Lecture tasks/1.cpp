#include <iostream>
using namespace std;
int main(){
	int age,number;
	cout<<"Enter Your Age : ";
	cin>>age;
	cout<<"Enter Any Number : ";
	cin>>number;
	if(number>age){
		cout<<"Your entered number is greater.....";
	}
	else if(number<age){
		cout<<"Your entered number is less than entered age ......";
	}
	else if(number<0){
		cout<<"You entered wrong number.....";
	}
}
