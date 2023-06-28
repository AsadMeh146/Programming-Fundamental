#include <iostream>
using namespace std;
int main(){
   int number;
   cout<<"Odd numbers between 1 to 100 are written below...."<<endl;
   number=1;
   while(number<=100){
	if(number%2==1){
	cout<<number<<endl;	
	}
   	number++;
   }
}
