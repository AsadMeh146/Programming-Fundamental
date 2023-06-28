#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	fstream newfile;
    string words;
 	newfile.open("dictionary.txt",ios::in);
	while(getline(newfile,words)){
       if(words[0]=='a')
	   {
       	cout<<words<<endl;
	   }
    }
	newfile.close();
}
