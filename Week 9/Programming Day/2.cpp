#include <iostream>
#include <fstream>
using namespace std;
int main(){
	fstream newfile;
    string words;
 	newfile.open("dictionary.txt",ios::in);
	while(getline(newfile,words)){
       if(words[0]=='b' && words[1]=='a' && words[2]=='b'){
       	cout<<words<<endl;
	}
    }
	newfile.close();
}
