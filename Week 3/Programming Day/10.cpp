#include <iostream>
using namespace std;
int main(){
	string month;
	int days;
	float studio,apartment;
	cout<<"Enter the month : ";
	cin>>month;
	cout<<"No. of days u want to live : ";
	cin>>days;
	if((month=="May" || month=="October") && (days<7)){
		studio=50;
		studio=studio*days;
		apartment=65;
		apartment=apartment*days;
	}
	else if((month=="May" || month=="October") && (days>=7 && days<=14)){
		studio=50*0.05;
		studio=60-studio;
		studio=studio*days;
		apartment=65;
		apartment=apartment*days;
	}
	else if((month=="May" || month=="October") && (days>14)){
		studio=50*0.30;
		studio=50-studio;
		studio=studio*days;
		apartment=65*0.10;
		apartment=65-apartment;
		apartment=apartment*days;
	}
	else if((month=="June" || month=="September") && (days<7)){
		studio=75.20;
		studio=studio*days;
		apartment=68.70;
		apartment=apartment*days;
	}
	else if((month=="June" || month=="September") && (days>=7 && days<=14)){
		studio=75.20;
		studio=studio*days;
		apartment=68.70;
		apartment=apartment*days;
	}
	else if((month=="May" || month=="October") && (days>14)){
		studio=75.20*0.20;
		studio=75.20-studio;
		studio=studio*days;
		apartment=68.70*0.10;
		apartment=68.70-apartment;
		apartment=apartment*days;
	}
	if((month=="May" || month=="October") && (days<7)){
		studio=50;
		studio=studio*days;
		apartment=65;
		apartment=apartment*days;
	}
	else if((month=="May" || month=="October") && (days>=7 && days<=14)){
		studio=50*0.05;
		studio=60-studio;
		studio=studio*days;
		apartment=65;
		apartment=apartment*days;
	}
	else if((month=="May" || month=="October") && (days>14)){
		studio=50*0.30;
		studio=50-studio;
		studio=studio*days;
		apartment=65*0.10;
		apartment=65-apartment;
		apartment=apartment*days;
	}
	if((month=="May" || month=="October") && (days<7)){
		studio=50;
		studio=studio*days;
		apartment=65;
		apartment=apartment*days;
	}
	else if((month=="May" || month=="October") && (days>=7 && days<=14)){
		studio=50*0.05;
		studio=60-studio;
		studio=studio*days;
		apartment=65;
		apartment=apartment*days;
	}
	else if((month=="May" || month=="October") && (days>14)){
		studio=50*0.30;
		studio=50-studio;
		studio=studio*days;
		apartment=65*0.10;
		apartment=65-apartment;
		apartment=apartment*days;
	}
	if((month=="July" || month=="August") && (days<7)){
		studio=76;
		studio=studio*days;
		apartment=77;
		apartment=apartment*days;
	}
	else if((month=="July" || month=="August") && (days>=7 && days<=14)){
		studio=76;
		studio=studio*days;
		apartment=77;
		apartment=apartment*days;
	}
	else if((month=="July" || month=="August") && (days>14)){
		studio=76;
		studio=studio*days;
		apartment=77*0.10;
		apartment=77-apartment;
		apartment=apartment*days;
	}
	cout<<"Studio fare will be : "<<studio<<endl;
	cout<<"Apartment fare will be : "<<apartment<<endl;
}
