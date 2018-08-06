#include<stdio.h>
int main()
{
    int a,b,c,m;
    scanf("%d %d %d",&a,&b,&c);
    m = a;
    if(a<b&&b>c)
    m = b;
    if(c>a&&c>b)
    m=c;
    printf("%d",m);
    
    return 0;
}
