#include <iostream>
using namespace std;
int main(){
	int number;
	cout<<"Enter a number : ";
	cin>>number;
	if(number>=1 && number<=100){
		cout<<"Your number is in 1 to 100 range ";
	}
   	else if(number>=100 && number<=500){
   		cout<<"Your number is in 100 to 500 range....";
	   }
	else if (number>=500 && number<=1000){
		cout<<"Your number is in 500 to 1000 range......";
	}   
	else if(number>1000){
		cout<<"It is out of range.....";
	}
	else if(number<0){
		cout<<"Wrong number......";
	}
}

