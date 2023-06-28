#include <iostream>
using namespace std;
void isVowel();
char word[4];
int main(){
	for(int i=0;i<=4;i++){
	cout<<"Enter any word : ";
	cin>>word[i];	
	}
	cout<<endl;
	isVowel();
	}
void isVowel(){
    int counter=0;
    cout<<"Following are the vowels in given letters......"<<endl;
    cout<<endl;
	for(int j=0;j<=4;j++){
    	if(word[j]=='A' || word[j]=='a' || word[j]=='E' || word[j]=='e' || word[j]=='I' || word[j]=='i' || word[j]=='O' || word[j]=='o' || word[j]=='U' || word[j]=='u'){
		cout<<word[j]<<endl;
		counter++;
		}
	}
	cout<<endl;
	cout<<"Total number of vowels are : "<<counter<<endl;
}

