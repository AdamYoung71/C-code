#include<stdio.h>
#define n 10
int main()
{
	int a[11],i,j,tem;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(i+1!=n)
		scanf(" ");
	}
	for(j=0;j<n;j++)
	{
		for(i=0;i+1<n;i++)
		{
			if(a[i]>a[i+1])
			{
				tem = a[i];
				a[i]=a[i+1];
				a[i+1]=tem;
			}
			else if(a[i]<a[i+1])
			{
				continue;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
		if(i+1!=n)
		printf(",");
	}
	return 0;
}
