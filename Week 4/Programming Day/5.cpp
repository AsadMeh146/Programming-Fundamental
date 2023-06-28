#include <iostream>
using namespace std;
int main(){
  int limit;
  int number;
  int zero=0;
  int even=0,odd=0;
  cout<<"Enter your limit : ";
  cin>>limit;
  for(int i=0;i<limit;i++){
  	cout<<"Enter your number : ";
  	cin>>number;
  	if(number==0){
  		zero++;
	  }
	else if(number%2==0){
  		even++;
	  }
	else if(number%2==1 || number%2==-1){
  		odd++;
	  }  
  }
   even=even+zero;
   cout<<"No of zeros : "<<zero<<endl;
   cout<<"No of even numbers : "<<even<<endl;
   cout<<"No of odd numbers : "<<odd<<endl;
}
