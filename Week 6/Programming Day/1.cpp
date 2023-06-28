#include <iostream>
using namespace std;
void grades(int number);
int main(){
	int number;
	string grade;
	cout<<"Enter your number out of 100 : ";
	cin>>number;
    grades(number);
}
void grades(int number){
	if(number<=100 && number>=91){
		cout<<"A";
	}
	else if(number<91 && number>=86){
		cout<<"A-";
	}
	else if(number<86 && number>=81){
		cout<<"B+";
	}
	else if(number<81 && number>=76){
		cout<<"B";
	}
	else if(number<76 && number>=71){
		cout<<"B-";
	}
	else if(number<71 && number>=66){
		cout<<"C+";
	}
	else if(number<66 && number>=61){
		cout<<"C";
	}
	else if(number<61 && number>=56){
		cout<<"C-";
	}
	else if(number<56 && number>=51){
		cout<<"D";
	}
	else if(number<=50 ){
		cout<<"Fail";
	}
}
