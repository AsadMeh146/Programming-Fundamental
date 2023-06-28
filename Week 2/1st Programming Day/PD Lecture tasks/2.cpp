#include <iostream>
using namespace std;
int main(){
    string vowel;
    cout<<"Enter any letter : ";
	cin>>vowel;
	if((vowel=="A") || (vowel=="E") || (vowel=="I") || (vowel=="O") || (vowel=="U")){
		cout<<"Enter letter is vowel letter .....";
	} 
	else {
		cout<<"It is not a vowel......";
	}
}
