#include <string>
#include <string.h>
#include <fstream>
#include <iostream>
#include <string.h>
using namespace std;
 
int main()
{
   
    ifstream input;
    input.open("players.txt");
    string str;
    while(true){
    input>>str;
	if(input.eof())
    {
    break;}
    cout<<str<<" ";
	}
    input.close();


system("PAUSE");
return 0;
}
