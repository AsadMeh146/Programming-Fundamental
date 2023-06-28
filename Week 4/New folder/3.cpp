#include <iostream>
using namespace std;
int main () {
   int number,sum,limit;
   float average;
   cout<<"Enter your limit : ";
   cin>>limit;
   for(int i=0;i<limit;i++){
   	cout<<"Enter your number : ";
   	cin>>number;
   	sum+=number;
   }
   average=sum/limit;
   cout<<"Sum of the numbers : "<<sum<<endl;
   cout<<"Average of numbers will be : "<<average<<endl;
}
