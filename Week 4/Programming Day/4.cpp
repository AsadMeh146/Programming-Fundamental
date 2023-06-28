#include <iostream>
using namespace std;
int main(){
    int first;
    int second;
    int x;
    int third;
    cout<<"Enter your first number : ";
    cin>>first;
    cout<<"Enter your second number : ";
    cin>>second;
    cout<<"Enter your fibonnic series range : ";
    cin>>x;
    for (int i=0;i<=x-3;i++){
    	third=first+second;
    	first=second;
		second=third;
	}
	cout<<third<<endl;
}
