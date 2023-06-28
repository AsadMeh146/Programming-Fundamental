#include <iostream>
#include <cmath>
using namespace std;
int main(){
	float mass1,mass2,x,k,force,time_;
	cout<<"Enter mass : ";
	cin>>mass1;
	cout<<"Enter released mass : ";
	cin>>mass2;
	cout<<"Enter value of x : ";
	cin>>x;
	force=9.8*mass1;
	k=force*x;
	time_=2*3.14*sqrt(mass2/k);
	cout<<"Your time : "<<time_;
}
