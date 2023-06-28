#include <iostream>
using namespace std;
int main(){
   int start;
   int end;
   int stop;
   cout<<"Enter your starting point : ";
   cin>>start;
   cout<<"Enter your end point : ";
   cin>>end;
   cout<<"Enter stopping point : ";
   cin>>stop;
   for(int i=end;i>=start;i--){
    if((i%2==0) && (i%3 == 0)) {
        if((i == stop) && (i%2 == 0) && (i%3 == 0)){
            break;
    }
    }
   }
}
