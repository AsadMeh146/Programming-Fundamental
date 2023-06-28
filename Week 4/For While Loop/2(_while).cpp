#include <iostream>
using namespace std;
int main(){
	int number;
	int x=1;
	cout<<"Enter number whose table you want : ";
	cin>>number;
	while(x<=10){
		cout<<number<<"*"<<x<<"="<<number * x<<endl;
		x++;
	}
}
