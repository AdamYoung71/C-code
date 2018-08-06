/*输入n(n<100)个有序正数，请用折半查找算法，查找x在其中的位置。
例如,
输入:
5
1,2,3,4,5
2
输出:
2*/
 #include<stdio.h>
 #include<math.h> 
int main()
{
    int i,j,temp,len;
    scanf("%d",&len);
    int a[len];
    for(i=0;i<len;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<len;i++)
    {
        for(j=0;j<len-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    /*for(i=0;i<len;i++)
    {
        printf("%d",a[i]);
        if(i!=len-1)
        printf(",");
    }*/
    int low=0,n,mid; 
	int high=len-1; 
	scanf("%d",&n);
     while(low <= high) 
	   {
		  mid = (low+high)/2; 		 
		  if (n==a[mid])	
			break;
		  else if (n<a[mid])   
		  		high=mid-1;
			else low =mid+1;   
		}
		if (n == a[mid]) 
           printf("%d\n",mid);



    
    
    
   
	
	
	

 
    return 0;
}
