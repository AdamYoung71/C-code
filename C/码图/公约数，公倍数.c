#include <stdio.h>
int main()
{
    int a=0,b=0;
    scanf("%d %d",&a,&b);  //������������
    int num1=0,num2=0,c=0; //num1,num2��Ϊ����ʱ�ı�����c��Ϊ�м����
    if(a>=b)
    {
        num1=a;
        num2=b;
    }
    else
    {
        num1=b;
        num2=a;
    }             //ͨ���Ƚ϶�num1��num2��ֵ�����ڼ���
    while(num2>0)
    {
        c=num1%num2;
        num1=num2;
        num2=c;
    }                  //շת�����num2=0ʱ��num1=�������
    printf("���������%d\n",num1);
    printf("��С��������%d\n"a*b/num1);
    return 0;
}
