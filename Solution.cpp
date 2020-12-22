#include<iostream>
#include<malloc.h>
using namespace std;
int main()
{
	int n,h;
	cin >> n;
	int *a;
	a = (int *)malloc(sizeof(int)*n);
	cin >> h;
	int max=0,min_num_of_coins=0;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
		if(a[i]>max)
		max=a[i];
	}
	//cout << max;
	int low = 1, high = max,mid=0;
	while(low<high)
	{
		mid = low + (high-low)/2;
		int time=0;
		for(int i=0;i<n;i++)
		{
			time += (a[i]+mid-1)/mid;
		}
	//	cout << time << " ";
		if(time <= h)
		{
			min_num_of_coins = mid;
			high = mid-1;
		}
		if(time>h)
		low = mid+1;
	}
	cout << min_num_of_coins;
}
