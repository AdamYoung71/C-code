//���Ĳ��ԣ�����һ30���ַ����ڵ��ַ������ж��Ƿ�Ϊ���ģ�����ǣ����ӡ"true"�������ӡ"false"����"aba"�����Ĵ������Ҷ�����������һ�¾��ǻ���
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
