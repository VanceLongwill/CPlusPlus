#include <iostream>
using namespace std;

int* copy(int a[],int n)
{
	int* p;
	p =new int[n];
	for (int i=0;i<n;i++)
		p[i]=a[i];	
return p; 
}

int main()
{
	int a[]={10,20,30,40,50};
	
	for(int i=0;i<5;i++)
		cout<<a[i]<<endl;
	
	int* b=copy(a,5);
	
	for(int i=0;i<5;i++)
		cout<<b[i]<<endl<<a[i]<<endl;
	
	return 0; }

