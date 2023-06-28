#include <iostream>
using namespace std;
int main(){
   float mass,height,time,power;
   cout<<"Enter mass : ";
   cin>>mass;
   cout<<"Enter height : ";
   cin>>height;
   cout<<"Enter time : ";
   cin>>time;
   power=(mass*9.8*height) / time;
   cout<<"Your power : "<<power;
   	
}
