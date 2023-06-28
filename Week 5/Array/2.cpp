#include <iostream>
using namespace std;
int main(){
   int num[10];
   int number;
   int freq=0;
   int i=0;
	for (int i=0;i<=9;i++){
		cout<<"Enter your number : ";
		cin>>num[i];   
	}
	for (int j=0;j<=9;j++){
	cout<<num[j] << " , ";	
	}
	cout<<endl;
    cout<<"Enter any number : ";
	cin>>number;
	for(int k=0;k<=9;k++){
	if(number==num[k]){
		freq++;
	}	
	}
	cout<<"The frequence of your number is : "<<freq<<endl;
	float largest=num[0];
	for (int idx=1;idx<=9;idx++){
		if(num[idx]>largest){
			largest=num[idx];
		}
	}
    cout<<"The Largest Number is : "<<largest<<endl;
    float smallest=num[0];
	for (int a=1;a<=9;a++){
		if(num[a]<smallest){
			smallest=num[a];
		}
	}
    cout<<"The Smallest Number is : "<<smallest;
}
