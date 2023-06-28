#include <iostream>
using namespace std;
int main(){
	string a,b,c;
	cout<<"Enter letter : ";
	cin>>a;
	cout<<"Enter letter : ";
	cin>>b;
	cout<<"Enter letter : ";
	cin>>c;
	cout<<"Permutation of the following string will be  "<<endl;
	cout<<a<<b<<c<<" "<<a<<c<<b<<" "<<b<<a<<c<<" "<<b<<c<<a<<" "<<" "<<c<<a<<b<<" "<<c<<b<<a;
}
