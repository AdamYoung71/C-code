#include<stdio.h>

int main()
{
	int n,i,j=1,k=0;
	int a[20][2]={0};
	scanf("%d",&n);
	for(i=0;i<1;i++)
	{
		scanf("%d %d",&a[i][0],&a[i][1]);
	} 
	re:;
		for(i=0;i<n;i++)
		{
			if(j%a[i][1]==a[i][2])
			{
				printf("%d",j);
				return 0;
			}
			continue;
		}
			else
			{
				j++;
				goto re;
			}
		
	
	
	return 0;
}
