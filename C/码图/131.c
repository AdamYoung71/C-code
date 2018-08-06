#include<stdio.h>
int main()
{
	int a[20],i,j,k,n;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]<0)
		{
			a[i]='\0';
			break;
		}
	}
	for(i=0;i<10;i++)
	printf("%d",a[i]);
	return 0;
}
