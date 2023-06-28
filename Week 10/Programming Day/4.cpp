#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream newfile;
	string words;
	int wordlength=0;
	newfile.open("WORDS.txt",ios::in);
    while(getline(newfile,words)){
    for(int j=0;words[j] != '\0';j++){
    	if(words[j]=='J'){
    	words[j]='I';
	}
	}
	cout<<words<<endl;
    newfile.close();
}
}
