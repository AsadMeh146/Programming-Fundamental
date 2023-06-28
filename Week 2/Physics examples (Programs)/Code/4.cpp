#include <iostream>
using namespace std;
int main(){
	float mass,velocity1,velocity2,time_,force;
	cout<<"Enter Mass : ";
	cin>>mass;
    cout<<"Enter velocity : ";
	cin>>velocity1;
	cout<<"Enter velocity : ";
	cin>>velocity2;
	cout<<"Enter time : ";
	cin>>time_;
	force=((mass * velocity1)-(mass * velocity2)) / time_;
	cout<<"Your force : "<<force;
	
}
