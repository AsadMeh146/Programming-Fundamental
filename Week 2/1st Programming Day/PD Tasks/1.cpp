#include <iostream>
using namespace std;
int main(){
	string Name;
	float PayRate;
	float WorkHours;
	float totalpay;
	cout<<"Enter Your Name : ";
	cin>>Name;
	cout<<"Enter Worker Pay : ";
	cin>>PayRate;
	cout<<"Enter Worked Hours : ";
	cin>>WorkHours;
	totalpay=PayRate*WorkHours;
	cout<<Name<<" total pay will be : "<<totalpay;
}
