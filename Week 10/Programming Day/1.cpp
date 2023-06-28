#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	fstream newfile;
    string words;
    int counter=0;
 	newfile.open("story.txt",ios::in);
	while(getline(newfile,words)){
       if(words[0]!='T'){
       	counter++;
	}
    }
    cout<<counter<<endl;
	newfile.close();
}
