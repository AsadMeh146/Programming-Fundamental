#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream newfile;
    char words;
	newfile.open("matter.txt",ios::in);
    while(!newfile.eof())
	{
	     newfile.get(words);
	     cout<<words<<"#";
	}
	newfile.close();
}
