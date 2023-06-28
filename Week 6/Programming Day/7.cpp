#include <iostream>
using namespace std;
void workingDays();
void gameTime();
void sleepTime();
void minToHour();
void outcome();
float holidays;
float time;
float days;
float holidaytime;
float daytime;
int totaltime;
int hour;
int sleep;
int minutes;

int main(){
	workingDays();
    gameTime();
    sleepTime();
    outcome();
	minToHour();
    
}   
void workingDays(){
	    cout<<"Enter Number Of Holidays : ";
		cin>>holidays;
	    days=365-holidays;
	    cout<<"No. of working days of owner : "<<days;
	    cout<<endl;
}              
void gameTime(){
	    daytime=(days)*63;
		holidaytime=holidays*127;
		totaltime=holidaytime+daytime;
        cout<<"Owner play with the tom cat for : "<<totaltime<<" time."<<endl;
}
void sleepTime(){
       sleep=30000-totaltime;
	   if(sleep<0){
	   	sleep=-(sleep);
	    cout<<"Time tom cat has for sleep : "<<sleep<<" minutes "<<endl; 
	   }
	   else{
	   	cout<<"Time tom cat has for sleep : "<<sleep<<" minutes "<<endl;
	   }
}
void outcome(){
     if(totaltime<=30000){
     	cout<<"Tom will sleep well......"<<endl;
	 }
	 else{
	 	cout<<"Tom will run away......"<<endl;
	 }
	
}
void minToHour(){
	hour=sleep/60;
	minutes=sleep%60;
    if(hour<0 && minutes <0){
    	hour=-(hour);
    	minutes=-(minutes);
    	cout<<hour<<" hour and "<<minutes<<" minutes remaining......";
	}
	else{
		cout<<hour<<" hour and "<<minutes<<" minutes remaining......";
	}
}

