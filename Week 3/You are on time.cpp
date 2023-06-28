#include <iostream>
using namespace std;
int main(){
	int minutes,hour,starthour,startminute,enterhour,enterminute,totalstart,totalend;
	cout<<"Enter exam starting hour : ";
	cin>>starthour;
	cout<<"Enter exam starting minutes : ";
	cin>>startminute;
	cout<<"Enter your entering hour : ";
	cin>>enterhour;
	cout<<"Enter your entering minute : ";
	cin>>enterminute;
	starthour=starthour*60;
	enterhour=enterhour*60;
	totalstart=starthour+startminute;
	totalend=enterhour+enterminute;
	if(totalstart>totalend){
		minutes=totalstart-totalend;
		hour=minutes/60;
		minutes=minutes%60;
		if(hour==0 && minutes<=30){
			cout<<"You are on time "<<hour <<" hour and "<<minutes<<" minutes....";
		}
		else{
		cout<<"You are early "<<hour <<" hour and "<<minutes<<" minutes....";	
		}
	}
	else if(totalstart==totalend){
		cout<<"Your are on time......";
	}
	else if(totalstart<totalend){
		minutes=totalstart-totalend;
		hour=minutes/60;
		hour=-(hour);
		minutes=minutes%60;
		minutes=-(minutes);
		cout<<"You are late "<<hour <<" hour and "<<minutes<<" minutes....";
	}
}
