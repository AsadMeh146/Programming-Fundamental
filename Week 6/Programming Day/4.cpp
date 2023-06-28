#include <iostream>
#include <cmath>
using namespace std;
int binToOct(int binary);
int binary;
int main(){
	int octelnumber;
   	cout<<"Enter your binary number : ";
   	cin>>binary;
   	octelnumber = binToOct(binary);
   	cout<<octelnumber<<endl;
}
int binToOct(int binary){
	int i=1;
	int remainder;
	int octel=0;
	while(binary!=0){
		remainder=binary%10;
		octel= octel + (remainder * i);
		i=i*2;
		binary=binary/10;
	}
	return octel;
}
