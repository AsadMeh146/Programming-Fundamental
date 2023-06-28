#include <iostream>
using namespace std;
int main(){
	char service;
	char day;
	float minutes;
	float bill;
	cout<<"Enter your service : ";
	cin>>service;
	if(service=='r' || service=='R'){
		cout<<"Enter number of minutes service is used : ";
		cin>>minutes;
	   if(minutes<=50){
	   	bill=10;
	   	cout<<"Your bill will be : "<<bill;
	   }
		   else if(minutes>50){
	   		minutes=minutes-50;
	   		minutes=minutes*20;
	   		minutes=minutes/100;
	   		bill=minutes+10;
	   		cout<<"Your bill will be : "<<bill;
		   }
	   }
	else if(service=='p' || service=='P'){
		cout<<"Enter the time : ";
		cin>>day;
	if(day=='d' || day=='D'){
		cout<<"Enter number of minutes service is used : ";
		cin>>minutes;
		if(minutes<=75){
			bill=25;
			cout<<"Your bill is : "<<bill<<endl;
		}
		else if(minutes>75){
			minutes=minutes-75;
	   		minutes=minutes*10;
	   		minutes=minutes/100;
	   		bill=minutes+25;
	   		cout<<"Your bill will be : "<<bill;
		}
	}
	else if(day=='n' || day=='N'){
		cout<<"Enter number of minutes service is used : ";
		cin>>minutes;
		if(minutes<=100){
			bill=75;
			cout<<"Your bill is : "<<bill<<endl;
		}
		else if(minutes>100){
			minutes=minutes-100;
	   		minutes=minutes*5;
	   		minutes=minutes/100;
	   		bill=minutes+25;
	   		cout<<"Your bill will be : "<<bill;
		}
	}	
	}   
	}

