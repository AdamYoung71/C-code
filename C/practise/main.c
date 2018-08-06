//Write a program that outputs the string representation of numbers from 1 to n.
//But for multiples of three it should output ¡°Fizz¡± instead of the number and for the multiples of five output ¡°Buzz¡±. 
//For numbers which are multiples of both three and five output ¡°FizzBuzz¡±.
#include <stdio.h>
void judge(int i)
{
	if(i%3==0&&i%5!=0)
	{
		printf("\"Fizz\"\n");
	}
	else if (i%5==0&&i%3!=0)
	{
		printf("\"Buzz\"\n");
	}
	else if(i%5==0&&i%3==0)
	{
		printf("\"FizzBuzz\"\n");
	}
	else
		printf("\"%d\"\n",i);
}

int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		judge(i);
	}
	return 0;
	
}

