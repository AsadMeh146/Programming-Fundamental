#include <iostream>
using namespace std;
int main(){
	int hours,minutes,seconds,totalseconds;
	cout<<"Enter Hours : ";
	cin>>hours;
	cout<<"Enter Minutes : ";
	cin>>minutes;
	cout<<"Enter Seconds : ";
	cin>>seconds;
	totalseconds=(hours*3600)+(minutes*60)+(seconds);
	cout<<totalseconds;
}
