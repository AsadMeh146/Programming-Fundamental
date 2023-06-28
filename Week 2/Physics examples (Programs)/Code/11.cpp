#include <iostream>
using namespace std;
int main(){
 float density,n,radius,velocity;
 cout<<"Enter density : ";
 cin>>density;
 cout<<"Enter value of n : ";
 cin>>n;
 cout<<"Enter radius : ";
 cin>>radius;
 velocity=(2*9.8*radius*radius*density)/(9*n);
 cout<<"Your velocity : "<<velocity;	
}
