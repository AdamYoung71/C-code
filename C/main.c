#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define random(a,b) (rand() % (b - a)) + a+1
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,x,cup,money=0,a[22],i,j,current,z,y;
	srand((unsigned int)time(NULL));
	n=random(5,20);
	z=random(10,30);
	for(i=1;i<=n;i++)
	a[i]=i;
	current=1;
	for(j=1;j<=z;j++)
	{
		x=random(2,5);
		y=random(1,3);
		if(x+current>n)
		current=x+current-n;
		else
		current+=x;
		a[current]+=y;
		money+=y;
	}
	for(i=1;i<=n;i++)
	{
		if(a[i]==i)
		continue;
		else
		{
			printf("%d %d\n",i,a[i]-i);
		}
	}
	
	money=money%3==0?5*(money/3):5*(money/3)+1;
	printf("%d",money);
	
	return 0;
}
