#include<iostream>
#include<iomanip>
#include<stdlib.h>
using namespace std;

float Convert(float TempFah)
{
	float TempCel;
	TempCel = ((TempFah - 32) * 5) / 9;
	return TempCel;
}

int main() {
	float TempFah;
	float TempCel;

	cout<<"Please enter the temperature in Fahrenheit: ";
	cin>>TempFah;
	TempCel = Convert(TempFah);
	
	cout<<"\nHere's the temperature in Celsius: ";
	cout<<setprecision(5)<<TempCel<<endl;
	return 0;
}

