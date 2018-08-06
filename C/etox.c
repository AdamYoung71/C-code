
#include<stdio.h>

int main()
{
	double etox = 1, n,x,i,j,k;
	scanf("%lf %lf", &x,&n);
	if (n<0)
	{
		printf("error");
	}
	else
	{
		for(i=1;i<=n;i++)
		{	double po=1,m=1;
			for(j = i;j>0;j--)
			{
				po = po*j;
			}
			for(k=0;k<i;k++)
			{
				m=m*x;
			}
			etox+=m/po;	
		}printf("%lf",etox);
	}
	
	return 0;
}

