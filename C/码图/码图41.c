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




//��Ŀ������
//struct Person{
//����int no;
//����int age;
//����int height;
//}
//ʵ��sort�����Խṹ�������������
//void sort(Person * array,int n);
//����Ϊsort.cpp.
//����no��С�����������no��ͬ�����age�������age��ͬ�������height����
//
//ע�⣺
//�����쳣��������"error"������Ҫ�������������Ϊ����
