#include <iostream>
using namespace std;
int main(){
	float diameter,length,volume;
	cout<<"Enter diameter : ";
	cin>>diameter;
	cout<<"Enter length : ";
	cin>>length;
	volume=(3.14*diameter*diameter*length) / 4;
	cout<<"Your volume : "<<volume;
}
