#include<stdio.h>
typedef struct Person{
   int age;
  int height;
}Person;
void swap(Person * array,int n)
{
	if(array<=0||n<=0)
	{
		printf("error");
		return;
	}
	else
	{
		int i;
		i=array[0].height;
		array[0].height=array[n-1].height;
		array[n-1].height=i;
		return;
	}
}
int main()
{


	return 0;
}
