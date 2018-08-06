
#include<stdio.h>
int isPrime(int num)
{
	if(num<3)
	{
		return 0;   // 0������ 
	}
	else
	{
		int judge,state=1;
		for(judge=2;judge*judge<=num;judge++)
		{
			if(num%judge==0)
			{
				state=0;
				break;
			}
		}
		return state;
	}
}

int main()
{
	int n,i,j,k,isPi,isPj;
	scanf("%d",&n);
	if(n%2==0)
	{
		for(i=2;i<=n/2;i++)
		{
			j=n-i;
			isPi=isPrime(i);
			isPj=isPrime(j);
			if(isPi && isPj)
			{
				printf("%d+%d\n",i,j);
			}
		}
	}
	else
	printf("Error");
	return 0;
}
