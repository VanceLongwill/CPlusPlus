/*

Declare an integer array of size 50
Fill the elements of the array with random
numbers between 120 and 300
Swap the successive two elements of the array
a[0] will be swapped with a[1], a[2] with a[3], a[4]
with a[5], …., a[48] with a[49]
Display the elements of the array

*/


#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int arr[50]; //Declare an integer array of size 50
	for(int i=0;i<50;i++) //Fill the elements of the array with random numbers between 120 and 300
	{
		arr[i]=rand()% (301 - 120)+ 120;
		cout<<arr[i]<<endl;
	}
	
	cout<<"------"<<endl;

	for(int j=0;j<50;j+=2){ 
	// Swap the successive two elements of the array
	// example a[0] will be swapped with a[1]
		int temp=arr[j];
		arr[j]=arr[j+1];
		arr[j+1]=temp;
	}
	for(int z=0;z<50;z++){ //Display the elements of the array
		cout<<arr[z]<<endl;
	}
	
	
	
	
	return 0;
}


