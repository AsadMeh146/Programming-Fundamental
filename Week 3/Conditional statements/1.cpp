#include<iostream>
using namespace std;
int main(){
	string username;
	int pass;
	cout<<"Enter your username : ";
	cin>>username;
	cout<<"Enter password : ";
	cin>>pass;
	if(username=="admin" && (pass=="123")){
		cout<<"Login successfully .....";
	}
	else {
		cout<<"Invalid username or password.....";
	}
}
