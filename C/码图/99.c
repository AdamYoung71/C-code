//回文测试：输入一30个字符以内的字符串，判断是否为回文；如果是，则打印"true"；否则打印"false"。像"aba"这样的从左往右读与从右往左读一致就是回文
#include<stdio.h>
#include<string.h>
int main()
{
	char a[31],b[31],n;
	int i=0,j;
	n=getchar();
	while(n=getchar()!='\n'&&i<n)
	{
		a[i]=getchar();
		i++ ;
	}
	for(i=0;i<30;i++)
	{
		b[i]=a[31-i];
	}
	if(strcmp(a,b)==1)
		printf("true");
	else
		printf("false");
	return 0;
}
