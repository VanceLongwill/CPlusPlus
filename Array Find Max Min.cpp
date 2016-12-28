#include<iostream>
#include<stdlib.h>
using namespace std;

int max(int*,int);

int main()
{
	int arr[5];
	for(int i=0;i<5;i++)
	{
		arr[i]=rand()%9;
		cout<<arr[i]<<endl;
	}
	max(arr,sizeof(arr)/sizeof(int));
	return 0;
}

int max(int *a,int length)
{
	int min=a[0], max=a[0];
	for(int i=0;i<length;i++)
	{
		if(a[i]>max)
			max=a[i];
		if(a[i]<min)
			min=a[i];
	}
	cout<<"Max: "<<max<<"Min: "<< min;
}
