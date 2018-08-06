#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n;
    char a[31],b[31];
    gets(a);
    i = strlen(a);
    for(n=i-1;n>=0;n--)
    {
        for(j=0;j<i;j++)
        {
        	b[j]=a[n];
		}
    }
    for(n=0;n<i;n++) 
    {
    	if(a[i]=b[i])
    	printf("yes");
    	else
    	printf("no");
	}
    return 0;
}
