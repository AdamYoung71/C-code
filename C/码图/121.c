#include<stdio.h>
int main()
{
	void isort(int a[],int n);
	int n,i=0;
	scanf("%d",&n);
	int a[100]={0};
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	isort(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
		if(i!=n-1)
		printf(",");
	}
	
} 
void isort(int a[3],int n)
{
	int i,j,b[n];
	
	for(i=0;i<n;i++)
	{
		b[i]=a[i];
	}
	for(i=0;i<n;i++)
	{
		a[i]=b[n-i-1];
	}
	
	return;
}
