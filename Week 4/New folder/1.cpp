#include <iostream>
using namespace std;
int main () 
{ 
int number;
cout<<"Enter Your Number...";
cin>>number;
int f=1;
for (int x=2;x<=number;x++){
     f=f*x;    
}
	cout<<"Factorial Of Given Number is "<<f;
	cout<<endl;
}  
