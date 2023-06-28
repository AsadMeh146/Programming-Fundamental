using namespace std;
#include <iostream>
int main(){
	int first,second,third,x;
    cout<<"Enter first number: ";
	cin>>first;
	cout<<"Enter second number: ";
	cin>>second;
	cout<<"Enter the number of fabniocci series: ";
	cin>>x;
	cout<<"Fabniocci series is below : "<<endl;
    cout<<first<<endl;
	cout<<second<<endl;
	for(int i=0;i<=x-3;i++)
	{
	third=first + second;
	first=second;
	second=third;
	cout<<third;
	cout<<endl;
	}
    cout<<endl;
		
}
