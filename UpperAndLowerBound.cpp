#include<iostream>
#include<malloc.h>
using namespace std;
void upperBound(int a[],int n,int e)
{
	int low = 0,high = n-1;
	int upperbound = -1;
	while(low < high)
	{
		int mid = (high+low)/2;
	//	cout << mid << endl;
		if(a[mid]<=e)
		{
			upperbound = mid+1;
			low = mid + 1;
		}
		else
			high = mid; 
	}
	cout << a[upperbound] << endl;
}
int lowerBound(int a[],int n,int e)
{
	int low=0,high=n-1;
	int lowerbound=-1;
	while(low<=high)
	{
		int mid = (low+high)/2;
		if(a[mid]>=e)
		{
			lowerbound = mid-1;
			high = mid - 1;
		}
		else
			low = mid + 1; 
	}
	cout << a[lowerbound];
}
int main()
{
	int n,e;
	cin >> n;
	int *a;
	a = (int *)malloc(sizeof(int)*n);
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	cin >> e;
	upperBound(a,n,e);
	lowerBound(a,n,e);
//	cout << a[upperBound(a,n,e)]<< endl;
//	cout << lowerBound(a,n,e) << endl;
	return 0;
}
