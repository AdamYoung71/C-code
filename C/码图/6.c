#include<stdio.h>
int main()
{
	void maxInt(int *array,int n,int *result);
	int *array[5]={1,2,3,4,5};
	int n=5,*result=NULL;
	maxInt(*array,n,*result);
	int i;
	for(i=1;i<5;i++)
	printf("%d ",*array[i]);
	
}
void maxInt(int *array,int n,int *result)
{
	
	int i,j;
	*result=*array;
	for(i=0;i<n;i++)
	{
		if(*(array+i)<*(array+i+1))
			*result=*(array+i+1);
	}
	return;
}

