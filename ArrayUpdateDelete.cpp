#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	int i, size;
	int* arrAge;
	cout<<"Enter the size of the array: "<<endl;
	cin>>size;
	arrAge = new int[size];
	
	srand(time (0));
	for (i=0; i<size; i++)
	{
		cout<<"Enter the"<<i<<" Age:"<<endl;
		cin>>arrAge[i];
		cout<<arrAge[i]<<" girilen "<<endl;
	}
	cout<<"if you want to delete the index of the element = 1 "<<endl;
	cout<<"else updated the array= 2"<<endl;
	int control=0;
	cin>>control;
	
	if(control==1)
	{
		cout<<"How many elements to be deleted=";
		int control2;
		cin>>control2;
		
		int size2=size-control2;
		int* arrAge2;
		arrAge2 = new int[size2]; // new array created
		int i=0;
		if(control2<size)
		{
			arrAge2 = new int[size2];
			for(int j=0;j<size2;j++)
			{
				arrAge2[j]=arrAge[j];
			}
			for(int k=0;k<size2;k++)
			{
				cout<<"New Array: "<<arrAge2[k]<<endl;
			}			
		}		
	}else if(control==2)
	{
		cout<<"How many elements to be updated=";
		int control2;
		cin>>control2;
		int size2=size+control2;
		int* arrAge2;
		arrAge2 = new int[size2]; // new array created
		
		for(int k=control2;k=0;k--)
		{
			cout<<"Enter the new array elements= ";
			int neweleman;
			cin>>neweleman;
			arrAge2[size2-k]=neweleman;
		}
		for(int k=0;k<size2;k++)
		{
			cout<<"New Array: "<<arrAge2[k]<<endl;
		}			
				
			
	}
	delete [] arrAge;
	
	return 0;
}















