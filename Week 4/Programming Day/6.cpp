#include <iostream>
using namespace std;
int main(){
   float range;
   float number;
   float sum1=0,sum2=0,sum3=0,sum4=0,sum5=0;
   float p1,p2,p3,p4,p5;
   cout<<"Enter your range : ";
   cin>>range;
   for(int i=0;i<range;i++){
   	cout<<"Enter your number : ";
   	cin>>number;
   	if(number<=200){
   		sum1++;
	   }
	else if(number>200 && number<=399){
		sum2++;
	}
	else if(number>399 && number<=599){
		sum3++;
	}
	else if(number>599 && number<=799){
		sum4++;
	}
	else if(number>799){
		sum5++;
	} 
   }
   p1=(sum1*100)/range;
   p2=(sum2*100)/range;
   p3=(sum3*100)/range;
   p4=(sum4*100)/range;
   p5=(sum5*100)/range; 
   cout<<p1<<endl;
   cout<<p2<<endl;
   cout<<p3<<endl;
   cout<<p4<<endl;
   cout<<p5<<endl;
}
