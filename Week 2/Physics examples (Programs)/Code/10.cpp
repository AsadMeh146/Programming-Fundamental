#include <iostream>
using namespace std;
int main(){
	float mass,radius,time_,momentum;
	cout<<"Enter mass : ";
	cin>>mass;
	cout<<"Enter radius : ";
	cin>>radius;
	cout<<"Enter time : ";
	cin>>time;
	momentum=(2*3.14*radius*radius*mass)/time_;
    cout<<"Your angular momentum : "<<momentum;
}
