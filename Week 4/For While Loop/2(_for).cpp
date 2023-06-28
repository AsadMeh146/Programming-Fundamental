#include <iostream>
using namespace std;
int main()
{
	int value;
cout<<"This is used to find multiple of numbers.."<<endl;
	cout<<"Enter Your Number... ";
	cin>>value;
	cout<<"The multiples of "<<  value  << " are as following:"<<endl;	
	for (int x=1;x<=10;x=x+1){
		cout<<value <<"*" << x << "=" << value * x <<endl;
	}
return 0;
}

