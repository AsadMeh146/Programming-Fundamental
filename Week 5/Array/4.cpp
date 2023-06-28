#include <iostream>
using namespace std;
int main(){
	string movies[5]={"Avengers","Thor","TombRider","CaptainAmerica","IronMan"}; 
	string moviename;
	int price;
   
   cout<<"Enter your movie : ";
   cin>>moviename;
   for(int i=0;i<=4;i++){
   	if(moviename==movies[i] && i%2==0){
   		price=500-25;
	   }
	else if(moviename==movies[i] && i%2==1){
		price=500-50;
	}   
   }
   cout<<"Your ticket price will be : "<<price;

}
   
