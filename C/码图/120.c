// ���һ������������������Լ�����������������⣩�ĺͣ���Ϊ�걸����
// �磺6������Լ����1��2��3������1+2+3=6.���30000���ڵ������걸��������ʾ�����
// �����걸���ú���ʵ�֣����ο�����ԭ�ͣ�void find(int j)��ֱ���ں��������С�ڵ���j���걸����������Լ����
// ���������ʽҪ��
// 	��д����void find(int j);ֱ���ں��������С�ڵ���j���걸����������Լ��
// 	�����ʽ��
// 	�걸��=Լ��+Լ��+Լ��...�س�
// 	��Լ����С����
// ���磺
// find(40);
// �����
// 6=1+2+3�س�
// 28=1+2+4+7+14�س�
#include<stdio.h>

int main()
{
    void find(int j);
    int isprim(int n);
    int num,n;
    scanf("%d",&num);
    find(num);
    return 0;
}


void find(int j)
{
    int n,i,k,count=0,temp[200]={},sum=0,h;
	
    for(i=1;i<=j;i++)
    {
        
            for(k=1;k<i;k++)
            {
                if(i%k==0)
                {
                    count++;
                    sum+=k;
                }
                else
                {
				
                	continue;
            	}
			}
            if(sum!=i)
            {
            	count=0;
            	sum=0;
				continue;
			}
            else
			{
				count=0;
				printf("%d=",i);
				for(k=1;k<i;k++)
				{
					if(i%k==0)
					{
						printf("%d",k);
						count+=k;
						if(count!=i)
                		printf("+");
						
					}
					else
					{
						continue;
					} 
					
				} 
				 printf("\n");
            	 count=0;
            	 sum=0; 
           }
            
            
        
    }
}

