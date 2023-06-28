#include<iostream>
using namespace std;
int main(){
   string gender;
   int age;
   cout<<"Enter your gender : ";
   cin>>gender;
   cout<<"Enter your age : ";
   cin>>age;
   if((gender=="Male" && (age>18 && age<=120)) || (gender=="Female" && (age>20 && age<=100))){
   	  cout<<"You are eligible....";
   }
   else{
   
   	cout<<"You r not eligible...";
   }
}
