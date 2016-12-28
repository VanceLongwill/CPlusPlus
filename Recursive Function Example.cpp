#include<iostream>

using namespace std;
//Write a recursive function (use no while loops or for loops) that prints all the elements of an array of integers, one per line. 
//The parameters to the function should be A (The array) and n (the size of the array). 
void ArrayPrint(int A[], int size)
{
	if(size > 0 )
	{
		ArrayPrint(A+1,size-1);
		cout << A[0] << "  "<<endl;
	}else{
		cout<< "Base case"<<endl;
		
	}
}
//Find the sum of the integers from 1 through n. Use recursion. 
int calculateSum(int num)
{
	int res;
   if (num == 1) {
      return (1);
   } else {
      res = num + calculateSum(num - 1);
   }
   return (res);
}
int main()
{
	int a[5]= {2,3,4,5,6};
	ArrayPrint(a,5);
	int i, num;
    int result;
 
	cout<<("Input a number : ");
	cin>>num;
	 
	result = calculateSum(num);
	cout<<result;
	
	return 0;
}
