#include <iostream>
using namespace std;
int main(){
	float velocity1,velocity2,time_,acceleration,displacement;
	cout<<"Enter velocity : ";
	cin>>velocity1;
	cout<<"Enter velocity : ";
	cin>>velocity2;
	cout<<"Enter time : ";
	cin>>time_;
	acceleration=(velocity2-velocity1)/time_;
    displacement=velocity1*time_+(0.5*acceleration*time_*time_);
    cout<<"Your angular displacement : "<<displacement;
    cout<<"Your angular acceleration : "<<acceleration;
}
