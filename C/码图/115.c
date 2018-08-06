#include<stdio.h>

int main()
{
	void tran(int array[5][3], int out_array[3][5]);
	int i,*pa, array[5][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12},{13,14,15}},out_array[3][5]={0};
	tran(array,out_array);
	pa=out_array;
	for(i=0;i<15;i++)
	printf("%d",*(pa+i));
	return 0;
}
void tran(int array[5][3], int out_array[3][5])
{
	int i,j;
	for (i=1;i<3;i++)
	{
		for(j=1;j<5;j++)
		{
			out_array[i][j]=array[j][i];
		}
	}

	return;
}
