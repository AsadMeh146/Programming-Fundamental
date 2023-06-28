#include <iostream>
using namespace std;
int main(){
	float speed;
	cout<<"Enter your speed : ";
	cin>>speed;
	if(speed<=10){
		cout<<"Your speed is slow ";
	}
	else if(speed>10 && speed<=50){
		cout<<"Your speed is average ";
	} 
	else if(speed>50 && speed<=150){
		cout<<"Your speed is fast ";
	}
	else if(speed>150 && speed<=1000){
		cout<<"Your speed is ultra fast ";
	}
	else if(speed>1000){
		cout<<"Your speed is extremely fast ";
	}
}
