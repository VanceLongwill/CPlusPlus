/*Define an employee structure to store employee’s 
name, surname and age respectively (using struct).*/

#include<iostream>

using namespace std;

struct Point {
	string name;
	string surname;
	int age;
}p[3];


int main()
{
	
	for(int i=1;i<=3;i++)
	{
	cout<<"enter the name= "<<endl;
	cin>>p[i].name;
	cout<<"enter the surname= "<<endl;
	cin>>p[i].surname;
	cout<<"enter the age= "<<endl;
	cin>>p[i].age;
	
	cout<<p[i].name<<endl;
	cout<<p[i].surname<<endl;
	cout<<p[i].age<<endl;
	}
	
	return 0;
}
