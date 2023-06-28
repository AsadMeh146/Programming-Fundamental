#include <iostream>
using namespace std;
int main(){
	float time_,frequency,length;
	cout<<"Enter time period : ";
	cin>>time_;
	length=(9.8*time_*time_)/(4*3.14*3.14);
	frequency=1/time_;
	cout<<"Your Frequency : "<<frequency<<endl;
	cout<<"Your Length : "<<length<<endl;
}
