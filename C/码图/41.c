#include<stdio.h>
#include<stdlib.h> 
typedef struct Person{
	int no;
	int age;
	int height;
}Person;

void sort(Person * array,int n)
{
	int i,j,k;
	struct Person temp1,temp2,temp3;
	if(array<=0||n<=0)
	{
		printf("error");
		return;
	}
	else
	{
		for(i=0;i<n;i++)
	
		{
			for(j=0;j<n-i;j++)
			{
				if(array[j].no>array[j+1].no)//first item
				{
					temp1=array[j+1];
					array[j+1]=array[j];
					array[j]=temp1;
				}
				else if(array[j].no==array[j+1].no)//if no equal
				{
					if(array[j].age>array[j+1].age)
					{
						temp2=array[j+1];
						array[j+1]=array[j];
						array[j]=temp2;
					}
					else if(array[j].age<array[j+1].age)
					continue;
					else
					{
						if(array[j].height>array[j+1].height)
						{
							temp3=array[j+1];
						array[j+1]=array[j];
						array[j]=temp3;
						} 
					}
				}
				else 
				continue; 
			}
		}
		}
		return;
	}
	

int main()
{
	struct Person a,b,c;
	a.age=1;a.height=10;a.no=12;
	b.age=2;b.height=10;b.no=12;
	c.age=1;c.height=10;c.no=12;
	struct Person *array[3];
	int n=3;
	array[0]=&a;
	array[1]=&b;
	array[2]=&c;
	sort(array,n);
	printf("%d %d %d %d %d %d %d %d %d",a.no,a.age,a.height,b.no,b.age,b.height,c.no,c.age,c.height); 
	return 0;
}
