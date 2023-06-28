#include <iostream>  
using namespace std;  
int main()  
{ 
    int number,binary;
	cout<<"Enter your decimal number : ";
    cin>>number;
    cout<<"Your binary number will be : ";
	for(int i=0;number>0;i++){
	binary=number%2;
	number=number/2; 
    cout<<binary;
}
}

