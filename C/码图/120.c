// 如果一个数正好是他的所有约数（除了它本身以外）的和，称为完备数，
// 如：6，它的约数有1，2，3，并且1+2+3=6.求出30000以内的所有完备数，并显示输出。
// （求完备数用函数实现）（参考函数原型：void find(int j)，直接在函数中输出小于等于j的完备数及其所有约数）
// 输入输出格式要求：
// 	编写函数void find(int j);直接在函数中输出小于等于j的完备数及其所有约数
// 	输出格式：
// 	完备数=约数+约数+约数...回车
// 	（约数从小到大）
// 例如：
// find(40);
// 输出：
// 6=1+2+3回车
// 28=1+2+4+7+14回车
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

