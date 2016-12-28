/*
Mehmet KARAKÖSE

*/

#include<iostream>
#include<stdlib.h>
#include "binarytree.h"

using namespace std;

	size_t duplicate(int *arr, size_t len)
	{
	  size_t prev = 0;
	  size_t curr = 1;
	  size_t last = len - 1;
	  while (curr <= last) {
	    for (prev = 0; prev < curr && arr[curr] != arr[prev]; ++prev);
	    if (prev == curr) {
	      ++curr;
	    } else {
	      arr[curr] = arr[last];
	      --last;
	    }
	  }
	  return curr;
	}

int main()
{
	BinaryTree tree; 
	
	int arr[20];
	// create array and print 
	cout<<"Before: ";
	cout<<"{";
	for(int i=0;i<20;i++)
	{
		arr[i]=rand()%20;
		cout<<i<<"-"<<arr[i];
		cout<<", ";
	}
	cout<<"}"<<endl;
	
    size_t len = sizeof (arr) / sizeof (arr[0]); // The size of the newly created directory has been set.
    len = duplicate(arr, len);					// duplicate array
    
    // print new array
    cout<<"\nAfter: ";
    cout<<"{";
    for(int i=0;i<len;i++)
	{
		cout<<i<<"-"<<arr[i];
		tree.insert(arr[i]);  // insert tree
		cout<<", ";
	}
	cout<<"}"<<endl;
	tree.PreorderTraversal();
	tree.PostorderTraversal();
	tree.InorderTraversal();
    
    
    
    return 0;
}
