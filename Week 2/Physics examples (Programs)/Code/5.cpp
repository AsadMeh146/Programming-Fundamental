#include <iostream>
using namespace std;
int main(){
    float mass1,mass2,velocity,velocity1;
	cout<<"Enter your mass : ";
	cin>>mass1;
	cout<<"Enter your mass : ";
	cin>>mass2;
	cout<<"Enter your velocity : ";
	cin>>velocity1;
	velocity=((mass1-mass2)*velocity1)/(mass1+mass2);	
    cout<<"Your velocity : "<<velocity;
}
