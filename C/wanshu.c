#include<stdio.h>

int main()
{
	int x, temp, sum;
	for (x=1;x<1000;x++)
	{
		sum=0;
		for(temp=1;temp<x;temp++)
		{
			if(x%temp==0)
			{
				sum = sum + temp;
			}
		}
		
	}
	if (sum==x)
	{
		printf("%d\n", x);
		
	}
	return 0;
	
}
