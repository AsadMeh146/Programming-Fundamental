#include <iostream>
using namespace std;
int main(){
	float mass,velocity,radius,force;
	cout<<"Enter mass : ";
	cin>>mass;
	cout<<"Enter velocity : ";
	cin>>velocity;
	cout<<"Enter radius : ";
	cin>>radius;
	force=(mass*velocity*velocity)/radius;
	cout<<"Your force : "<<force;
	
}
