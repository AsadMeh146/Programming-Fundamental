#include <iostream>
using namespace std;
int main(){
   string fruit[4]={"peach","apple","guava","watermelon"};
   int price[4]={60,70,40,30};
   string order;
   int quantity;
   int bill;
   cout<<"Enter your food : ";
   cin>>order;
   cout<<"Enter quantity : ";
   cin>>quantity;
   for(int i=0;i<=3;i++){
   	if(order==fruit[i]){
   		bill=quantity*price[i];
	   }
   }   
   cout<<"Your total bill will be : "<<bill<<endl;
}
