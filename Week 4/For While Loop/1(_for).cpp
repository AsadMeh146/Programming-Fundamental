#include <iostream>
using namespace std;
int main(){
   float number;
   cout<<"Enter your number : ";
   cin>>number;
   for (float x=number;x>=0;x=x-0.5){
   	cout<<x<<endl;
   }
}
