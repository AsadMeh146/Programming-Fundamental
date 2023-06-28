#include <iostream>
using namespace std;
int main(){
   float mass,time,radius,density,masspertime,area,velocity;
   cout<<"Enter mass : ";
   cin>>mass;
   cout<<"Enter time : ";
   cin>>time;
   cout<<"Enter mass : ";
   cin>>radius;
   cout<<"Enter density : ";
   cin>>density;
   massspertime=mass/time;
   area=3.14*radius*radius;
   velocity=masspertime/(density*area);
   cout<<"Your velocity : "<<velocity;
   	
}
