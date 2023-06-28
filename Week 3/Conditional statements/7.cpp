#include <iostream>
using namespace std;
int main(){
	int minutes;
	float bill,totalbill;
	string area;
	cout<<"Enter your area : ";
	cin>>area;
	cout<<"Enter your minutes : ";
	cin>>minutes;
	if(area=="r" && minutes<=60){
		cout<<"Your bill is 5 dollars.....";
    }
	else if(area=="r" && minutes>60){
		minutes=minutes%60;
		bill=minutes*10;
		bill=bill/100;
		totalbill=5+bill;
		cout<<"Your bill is "<<totalbill<<" dollars....";
	}
	if(area=="c" && minutes<=300){
		bill=minutes*20;
		bill=bill/100;
		cout<<"Your bill is "<<bill<<" dollars....";
    }
	else if(area=="c" && minutes>300){
		minutes=minutes%300;
		bill=minutes*15;
		bill=bill/100;
		totalbill=60+bill;
		cout<<"Your bill is "<<totalbill<<" dollars....";
	}	
	}

