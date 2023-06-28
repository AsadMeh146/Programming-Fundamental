#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
   int num;
   int value;
   srand(time(0));
   num = rand() % 100;
   for (int i=0;i<=2;i++){
   cout<<"Enter your number : ";
   cin>>value;
   if(value>num){
   	cout<<"Your guess is greater than number "<<endl;
    cout<<"Guess again..."<<endl;
}
   else if(value<num){
   	cout<<"Your guess is less than number "<<endl;
    cout<<"Guess again..."<<endl;
   }
   else if(value==num){
   	cout<<"Your guess is right "<<endl;
   }	
   }
   	
   }
   
