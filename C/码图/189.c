/*题目3：输入n(n<100)个有序正数，请用折半查找算法，查找x在其中的位置。
例如,
输入:
5
1,2,3,4,5
2
输出:
2*/

#include<stdio.h>
int main()
{
	int a[101], low=0,high,mid,j,n;
	scanf("%d",&n);
	for(high=0;high<n;high++)
	{
		scanf("%d",&a[high]);
		if(high+1!=n)
		{
			scanf(",");
		}
	}
	scanf("%d",&j);	
	while(a[mid]!=j)
	{
		mid = (high+low)/2;
		if(a[mid]<j)
		{
			low = mid;
			continue;
		}
		else if(a[mid]>j)
		{
			high = mid;
			continue;
		}
	}
	printf("%d",mid+1);
	
	return 0;
}

