#include <iostream>
using namespace std;
int main(){
	int seconds,second,minutes,hours;
	cout<<"Enter Your Total Seconds : ";
	cin>>seconds;
	hours=seconds/3600;
	minutes=(seconds%3600)/60;
    second=seconds%60;
    cout<<hours<<":"<<minutes<<":"<<second;
	
}
