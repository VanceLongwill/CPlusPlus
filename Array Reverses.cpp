#include<iostream>
#include<stdlib.h>
using namespace std;

int max(int*,int);

int main()
{
	int arr[5];
	for(int i=0;i<5;i++)
	{
		arr[i]=rand()%10;
		cout<<arr[i]<<endl;
	}
	max(arr,sizeof(arr)/sizeof(int));
	return 0;
}

int max(int *a,int length)
{
	
	int arr2[5];
	for(int i=0;i<5;i++)
	{
		arr2[i]=a[5-1-i];
		cout<<": "<<arr2[i]<<endl;
	}
}
