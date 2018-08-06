#include<stdio.h>
int main()   
{ 
   unsigned k = 1, m,i;
   scanf("%u", &m);
   k = 0;
   for(i=1;i*=2;)
   {
       k = k+1;
       if (i>m)
       {
           printf("%u",k);
       }
   }
   
   return 0;
}
