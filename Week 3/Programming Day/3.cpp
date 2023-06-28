#include <iostream>
using namespace std;
int main(){
   int number;
   float bonus,total;
   cout<<"Enter your number : ";
   cin>>number;
   if(number<=100){
   	bonus=5;
   	if(number%2==0){
   		bonus=bonus+1;
   		total=bonus+number;
	   }
	else if(number%5==0){
		bonus=bonus+2;
		total=bonus+number;
	}
	cout<<"Your bonus : "<<bonus<<endl;
	cout<<"Your total points with bonus : "<<total<<endl;   
   }
   else if(number>100 && number<=1000){
   	bonus=number*0.2;
   	if(number%2==0){
   		bonus=bonus+1;
   		total=bonus+number;
	   }
	else if(number%5==0){
		bonus=bonus+2;
		total=bonus+number;
	}
	cout<<"Your bonus : "<<bonus<<endl;
	cout<<"Your total points with bonus : "<<total<<endl;   
   }
   else if(number>100){
   	bonus=number*0.1;
   	if(number%2==0){
   		bonus=bonus+1;
   		total=bonus+number;
	   }
	else if(number%5==0){
		bonus=bonus+2;
		total=bonus+number;
	}
	cout<<"Your bonus : "<<bonus<<endl;
	cout<<"Your total points with bonus : "<<total<<endl;   
   }
}
