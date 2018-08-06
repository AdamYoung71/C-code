#include <stdio.h>
int main()
{
    int a=0,b=0;
    scanf("%d %d",&a,&b);  //输入两个整数
    int num1=0,num2=0,c=0; //num1,num2作为计算时的变量，c作为中间变量
    if(a>=b)
    {
        num1=a;
        num2=b;
    }
    else
    {
        num1=b;
        num2=a;
    }             //通过比较对num1和num2赋值，便于计算
    while(num2>0)
    {
        c=num1%num2;
        num1=num2;
        num2=c;
    }                  //辗转相除，num2=0时，num1=最大公因数
    printf("最大公因数：%d\n",num1);
    printf("最小公倍数：%d\n"a*b/num1);
    return 0;
}
