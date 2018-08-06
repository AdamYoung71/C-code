#include<stdio.h>
int main()
{
	 void  bubbleSort(int data[],int n);
	 int a,b,data[]={5,4,3,2,1};
	 int n=5;
	 bubbleSort(data,5);
	 for(a=0;a<5;a++)
	 printf("%d ",data[a]);
	 
}
void  bubbleSort(int data[],int n)
{
	int temp,i,j,k,len;
	len=n;
	for (i=0;i<len;i++)
	{
		for(j=0;j<len-1;j++)
		{
			if(data[j]>data[j+1])
			{
				temp=data[j];
				data[j]=data[j+1];
				data[j+1]=temp;
			}
		}
	}
	return;
}
