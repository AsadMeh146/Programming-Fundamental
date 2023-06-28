#include <iostream>
using namespace std;
int main(){
	float num[10];
	float average;
	float sum=0;
	for (int i=0;i<=9;i++){
		cout<<"Enter your number : ";
		cin>>num[i];    
	    sum+=num[i];
	}
	average=sum/10;
	cout<<average<<endl;
}
