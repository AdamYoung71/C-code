#include <stdio.h>

struct Person{
	int no;
	int age;
	int height;
};

typedef struct Person Person;

void sort(Person *student,int n)
{
	if(student<=0 || n<=0)
	{
		printf("error");
		return;
	}
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(student[i].no>student[j].no)
			{
				temp=student[i].no;
				student[i].no=student[j].no;
				student[j].no=temp;
				temp=student[i].age;
				student[i].age=student[j].age;
				student[j].age=temp;
				temp=student[i].height;
				student[i].height=student[j].height;
				student[j].height=temp;
			}
			else if(student[i].no==student[j].no && student[i].age>student[j].age)
			{
				temp=student[i].no;
				student[i].no=student[j].no;
				student[j].no=temp;
				temp=student[i].age;
				student[i].age=student[j].age;
				student[j].age=temp;
				temp=student[i].height;
				student[i].height=student[j].height;
				student[j].height=temp;
			}
			else if(student[i].no==student[j].no && student[i].age==student[j].age && student[i].height>student[j].height)
			{
				temp=student[i].no;
				student[i].no=student[j].no;
				student[j].no=temp;
				temp=student[i].age;
				student[i].age=student[j].age;
				student[j].age=temp;
				temp=student[i].height;
				student[i].height=student[j].height;
				student[j].height=temp;
			}
		}
	}
}

int main()
{
	return 0;
}




//题目描述：
//struct Person{
//　　int no;
//　　int age;
//　　int height;
//}
//实现sort方法对结构体数组进行排序。
//void sort(Person * array,int n);
//保存为sort.cpp.
//根据no从小到大排序；如果no相同则根据age排序；如果age相同，则根据height排序。
//
//注意：
//遇到异常情况，输出"error"；否则不要随意输出，会视为错误。
