#include <iostream>
using namespace std;
void lowincome();
void highincome();
float income;
float time;
float rate;
float bill;
int main(){
	 cout<<"Enter your hourly rate : ";
	 cin>>rate; 
	 cout<<"Enter your income : ";
	 cin>>income;
	 cout<<"Enter your consulting time : ";
	 cin>>time;
	if(income<=25000){
		lowincome();
	}
	else if(income>25000){
		highincome();
	}
}
void lowincome(){
	if(time<=30){
		cout<<"There are no service charges......"<<endl;
	}
	else if(time>30){
		time=time-30;
        bill=rate * 0.40 * (time/60);
		cout<<"Your total billing amount : "<<bill<<endl;	
 	}
}
void highincome(){
	if(time<=20){
		cout<<"There are no service charges......"<<endl;
	}
	else if(time>20){
		time=time-20;
        bill=rate * 0.70 * (time/60);
		cout<<"Your total billing amount : "<<bill<<endl;
}
}
