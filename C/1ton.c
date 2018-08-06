#include<stdio.h>
int main()   
{ 
    int n, a, b,c=0;
    scanf("%d", &n);
    if( n<1||n>10)
    {
        printf("error");
    }
    else{
        for(;n>=1;n--)
        {
        	b=1;
	 		for(a = 1;a<=n;a++)
       	    {
          	    b = a*b;
      	    }
            c = c + b;
            
        }
        printf("%d\n",c);
    }
   
    return 0;
}
