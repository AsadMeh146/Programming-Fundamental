#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream newfile;
	string words;
	int wordlength=0;
	newfile.open("story.txt",ios::in);
    while(getline(newfile,words,' ')){
    for(int i=0;words[i] != '\0';i++){
        wordlength++;    
    } 
    if(wordlength<4){
       	cout<<words<<endl;
	}
	wordlength=0;
	}
    newfile.close();

}
