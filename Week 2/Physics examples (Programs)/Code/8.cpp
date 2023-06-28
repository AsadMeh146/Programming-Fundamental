#include <iostream>
#include <cmath>
using namespace std;
int main(){
	float mass,height1,height2,velocity;
	cout<<"Enter your mass : ";
	cin>>mass;
	cout<<"Enter your height : ";
	cin>>height1;
	cout<<"Enter your height : ";
	cin>>height2;
	velocity=sqrt(2*9.8*(height1-height2));
	cout<<"Your Velocity : "<<velocity;
}
