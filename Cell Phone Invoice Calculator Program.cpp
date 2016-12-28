/*
Suppose that you are asked to develop a cell phone invoice calculator program.
 There are two types of tariffs for users:
 (1) the users that do not use any package are charged
0.15 TL/6 seconds
 (2) the 'eco' package users will pay 19 TL fixed fee for first 50 minutes and 0.2 TL/6 seconds for extra talking time that exceeds 50 minutes
 The program will get the total number of talking time in terms of minutes (double type) and then calculate and print the 
total amount that the user will pay for each tariff type.
 Write the C++ source code of the above program.

*/

#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int tariff;
	double getMinute = 0;
	double seconds = 0;
	double results = 0;

	cout<<"--- Please select the yours tariffs ---"<<endl;
	cout<<"1- Not use any package"<<endl;
	cout<<"2- Eco package"<<endl;
	cout<<"=";
	cin>>tariff;//
	
	cout<<"---Please enter the total number of talking time in terms of minutes ---"<<endl;
	cout<<"=";
	cin>>getMinute;
	seconds = getMinute * 60;
	
	if(tariff == 1){
		results = (seconds/6) * (0.15);
		cout<<" Your cell phone invoice is "<< results ;
	}else if(tariff == 2){	
		if(getMinute <= 50){
			cout<<"Your cell phone invoice is 19 TL"<<endl;
		}else{
			getMinute = getMinute - 50;
			seconds = getMinute * 60;	
			results = (seconds/6) * (0.2);
			results = results+19;
			cout<<" Your cell phone invoice is "<< results ;
		}		
	}else{
		cout<<"Please enter valid value"<<endl;
	}
 
    return 0;
}


