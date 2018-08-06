#include<stdio.h>
#include<math.h>
int main()
{
	int find(int n);
	int n,f;
	scanf("%d",&n);
	f=find(n);
	printf("%d",f);
	return 0;
}
int find(int n)
{
	int i,n1,n2,n3,n4,count=0;
	if(n<1000)
	{
	for(i=153;i<=n;i++)
	{
		n1=i/100;
		n2=(i-100*n1)/10;
		n3=i-100*n1-10*n2;
		if(n1*n1*n1+n2*n2*n2+n3*n3*n3==i)
		{
			count++;
		}
		else
		continue;
	}
	}
	else
	{
		for(i=153;i<=n;i++)
	{
		n1=i/1000;
		n2=(i-1000*n1)/100;
		n3=(i-1000*n1-100*n2)/10;
		n4=i-1000*n1-100*n2-10*n3;
		if(n1*n1*n1+n2*n2*n2+n3*n3*n3+n4*n4*n4==i)
		{
			count++;
		}
		else
		continue;
	}
		
	}
	return count;
	
}
