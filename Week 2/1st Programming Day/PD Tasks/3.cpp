#include <iostream>
using namespace std;
int main(){
	int capacity;
	int miles;
    int totalmiles;
    cout<<"Enter capacity of gallons : ";
    cin>>capacity;
    cout<<"Enter miles per gallon : ";
    cin>>miles;
    totalmiles=miles*capacity;
    cout<<"Total miles without refueling you can drive will be : "<<totalmiles;
    
}
