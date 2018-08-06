#include<stdio.h>
#include<math.h>
int main()
{
        int n,i;
        scanf("%d",&n);
        printf("%d=",n);
        for(i=2;i<=sqrt(n);i++��          
        {
           if(n%i==0) {  　　　　　　　　　
              n/=i;
              printf("%d*",i--);  　　　
                 }
         }
       printf("%d\n",n);
        return 0;
}
