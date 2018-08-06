#include<stdio.h>
#include<math.h>
int main()
{
	float j;
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        j += pow(-1,i)/(2*i+1);
    }
    printf("pi= %f",j*4);
    return 0;
}
