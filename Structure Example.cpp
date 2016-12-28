// mehmet karakose

#include <string>
#include <string.h>
#include <fstream>
#include <iostream>
#include <string.h>
using namespace std;


struct playerInfo
{
	string name;
	string surname;
	double goals;
	int assists;
	double shots;
	double shooting;
	int points;
}p[8];
void readPlayer()
{
	ifstream input;
    ofstream output;
	input.open("players.txt");
	for(int i=0;i<8;i++)
	{
   		input>>p[i].name;
		input>>p[i].surname;
		input>>p[i].goals;
		input>>p[i].assists;
		//input>>p[i].points;
		input>>p[i].shots;
		//input>>p[i].shooting; 
        if(input.eof())
        {
        break;}
    }
    input.close();	
}
void displayPlayer()
{
	cout<<"Name ";
	cout<<"Surname ";
	cout<<"Goals ";
	cout<<"Assists ";
	cout<<"Points ";
	cout<<"Shots ";
	cout<<"Shooting"<<endl;
	for(int i=0;i<8;i++)
	{
        cout<<p[i].name<<" ";
        cout<<p[i].surname<<" ";
        cout<<p[i].goals<<" ";
        cout<<p[i].assists<<" ";
        cout<<p[i].points<<" ";
        cout<<p[i].shots<<" ";
        cout<<p[i].shooting<<" "<< endl;
    }	
}
void calculatedValues()
{
	for(int i=0;i<8;i++)
	{
		p[i].points=p[i].goals+p[i].assists;
		p[i].shooting=(p[i].goals)/((p[i].shots)*100);	
	}
}
void savePlayer()
{
	ofstream output;
	output.open("teams.txt");
	for(int i=0;i<8;i++)
	{
		output<<p[i].name<<" ";
        output<<p[i].surname<<" ";
        output<<p[i].goals<<" ";
        output<<p[i].assists<<" ";
        output<<p[i].points<<" ";
        output<<p[i].shots<<" ";
        output<<p[i].shooting<<" "<< endl;
	}
	output.close();
}
int main()
{
	ifstream input;
    ofstream output;
	input.open("players.txt");
	if(input.eof())
	{
		cout<<"yanlış oldu";
	}else{
		readPlayer();
	}
	
    calculatedValues();
    savePlayer();
    displayPlayer();
    
system("PAUSE");
return 0;
}
