#include<iostream>
using namespace std;
int main(){
   int subject1,subject2,subject3,subject4,subject5,totalmarks,result;
   cout<<"Enter your physics marks : ";
   cin>>subject1;
   cout<<"Enter your chemistry marks : ";
   cin>>subject2;
   cout<<"Enter your computer marks : ";
   cin>>subject3;
   cout<<"Enter your maths marks : ";
   cin>>subject4;
   cout<<"Enter your biology marks : ";
   cin>>subject5;
   totalmarks=subject5+subject4+subject3+subject2+subject1;
   cout<<"Your total marks out of 500 are "<<totalmarks<<endl;
   result=(totalmarks*100)/500;
   if(result>=90){
   	cout<<"Your grade is A.";
   }
   else if(result>=80){
   	cout<<"Your grade is B.";
   } 
   else if(result>=70){
   	cout<<"Your grade is C.";
   }
   else if(result>=60){
   	cout<<"Your grade is D.";
   }
   else if(result>=40){
   	cout<<"Your grade is E.";
   }
   else if(result<40){
   	cout<<"Your grade is F.";
   }  
  }

