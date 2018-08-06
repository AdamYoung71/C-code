#include<stdio.h>
#include<string.h>
int main()
{
	char str1[255]={0},str2[255]={0};
	int i,j,k=0,count=0,len1,len2,len,item[100]={};
	gets(str1);
	gets(str2);
	len1=strlen(str1);
	len2=strlen(str2);
	
	for(i=0;i<len1;i++)
	{
		if(str1[i]!=str2[0])
		continue;
		else
		{
			
			for(j=0;j<len2;j++)
			{
				if(str1[i+j]==str2[j])
				{
					continue;
				}
				else
				break;
				
			}
			if(j==len2)
			{
				count++;
				j=0;
				item[k]=i;
				k++;
			}
		}
	}
	if(count!=0)
	printf("%dtimes",count);
	else
	printf("NO");
	for(i=0;i<k;i++)
	printf(",%d",item[i]);
	return 0;
}

