#include <stdio.h>

 int main()
{
	int mon, a1=1, a2=1 ,i,n;
	scanf("%d", &mon);
	i = 1;
	if (mon==1||mon==2)
	{
		printf("1");
	}
	else
	{
		for ((n = 1);(n<mon-1);++n)
		{
		i = a1+a2;
		a2 = a1;
		a1 = i;
		}
		printf("%d\n", i);
		
	}
	return 0;

}
