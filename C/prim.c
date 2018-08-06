#include <stdio.h>
#include <stdlib.h>
#include<math.h>


int main(int argc, char *argv[]) {
	int i,j,temp;
	for (i=3;i<100;i++)
	{
	    for(j=2;j<=sqrt(i*1.0);j++)
	    {
	    	temp=0;
	        if(i%j==0){
	        temp=1;
			continue;
		}
			if (temp==0)
			{
				printf("%d, " ,i);
			}
		}
		
	}
	return 0;
}

