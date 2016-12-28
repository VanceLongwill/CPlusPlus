/*Define a function that calculates the average of the 
all grades (midterm 1, midterm 2 and final) of 5 
students stored in a structure. */

#include<iostream>

using namespace std;

int cal(int x,int y,int z)
{
	int result=(x+y+z)/3;
	
	return result;
}

struct Point {
	int midterm1;
	int midterm2;
	int final;
	int result;
}c[5];

int main()
{
	
	for(int i=1;i<=5;i++)
	{
		cout<<"enter "<<i<<"midterm"<<endl;
		cin>>c[i].midterm1;
		cout<<"enter "<<i<<"midterm 2"<<endl;
		cin>>c[i].midterm2;
		cout<<"enter "<<i<<"final"<<endl;
		cin>>c[i].final;
		c[i].result=cal(c[i].midterm1,c[i].midterm2,c[i].final);
	}	
	return 0;
}

