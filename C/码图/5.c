#include<stdio.h>
int main()
{
	void swap(int *array,int n);
	int array[]={1,2,3,4,5},n=5,i;
	swap(array,n);
	for(i=0;i<n;i++)
	printf("%d ",array[i]);
}
void swap(int *array,int n)
{
	if(n<=1)
	printf("error");
	else{
	
	int k; 
	k=array[0];
	array[0]=array[n-1];
	array[n-1]=k;
	}
	return;
	
}

