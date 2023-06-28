#include <iostream>
#include <fstream>
using namespace std;
int main(){
    fstream newfile;
    string words;
    string word[100];
    int i=0;
 	int counter=0;
	newfile.open("dictionary.txt",ios::in);
	while(getline(newfile,words)){
	if(words[0]=='c' || words[0]=='C'){
		word[i]=words;
		i++;
		counter++;
		if(counter==99){
			break;
		}
	}
	}
	newfile.close();
	for(int j=0;j<=99;j++){
		cout<<word[j]<<endl;
	}
}
