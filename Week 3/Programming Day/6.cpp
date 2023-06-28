#include <iostream>
using namespace std;
int main(){
	int second1,second2,second3,sum,minutes,seconds;
	cout<<"Enter time of contestant : ";
	cin>>second1;
	cout<<"Enter time of contestant : ";
	cin>>second2;
	cout<<"Enter time of contestant : ";
	cin>>second3;
	sum=second1+second2+second3;
	minutes=sum/60;
	seconds=sum%60;
	cout<<"Total time is "<<minutes<<" minutes and "<<seconds<<" seconds.....";
}
