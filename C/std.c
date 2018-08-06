#include<stdio.h>

struct S{
	char name[21];
	int gender;
	int birthday;
	float height;
	int calculus;
	int cprogram;
}std[1000]; 
int main()
{
	int n,i,sumcal=0,sumcp=0;
	int maxcal, maxcp,mincal,mincp;
	int calavr,cpavr;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{//输入数据并计算两门成绩和值 
		scanf("%s %d %d %f %d %d",&std[i].name,&std[i].gender,&std[i].birthday,&std[i].height,&std[i].cprogram,&std[i].calculus);
		sumcal = sumcal+std[i].calculus;
		sumcp = sumcp+std[i].cprogram;	 
	}//计算两门成绩平均值 
	calavr= sumcal/n;
	cpavr = sumcp/n;
	
	
	maxcal = std[0].calculus;
	mincal = std[0].calculus;
	maxcp = std[0].cprogram;
	mincp = std[0].cprogram;
	for(i=0;i<n-1;i++)
	{
		if(std[i].calculus<std[i+1].calculus) 
		{
			maxcal = std[i+1].calculus;	
		}
		if(std[i].cprogram<std[i+1].cprogram)
		{
			maxcp = std[i+1].cprogram;
		}
		if(std[i].cprogram>std[i+1].cprogram)
		{
			mincp = std[i+1].cprogram;	
		}
		if(std[i].calculus>std[i+1].calculus)
		{
			mincal = std[i+1].calculus;
		}
	
	}
	//输出	
	printf("C_average:%d\n",cpavr);
	printf("C_max:%d\n",maxcp);
	for(i=0;i<n;i++)
	{
		if(std[i].cprogram==maxcp)
		printf("%s %d %d %.2f %d %d\n",std[i].name,std[i].gender,std[i].birthday,std[i].height,std[i].cprogram,std[i].calculus);
	} 
	printf("C_min:%d\n",mincp);
	printf("Calculus_average:%d\n",calavr);
	printf("Calculus_max:%d\n",maxcal);
	for(i=0;i<n;i++)
	{
		if(std[i].calculus==maxcal)
		printf("%s %d %d %.2f %d %d\n",std[i].name,std[i].gender,std[i].birthday,std[i].height,std[i].cprogram,std[i].calculus);
	} 
	printf("Calculus_min:%d",mincal); 
	
	return 0;
}

 /*编译错误回车C:\aptat\test_dir\assignment\S\P\4.7 学生管理系统_2017060203019_20180428235451\
 4.7 学生管理系统_2017060203019_20180428235451.cpp(15) : error C3861: “scanf”: 找不到标识符回车C:\aptat\test_dir\assignment\S\P\
 4.7 学生管理系统_2017060203019_20180428235451\4.7 学生管理系统_2017060203019_20180428235451.cpp(18) : error C3861: “scanf”: 找不到标识符回车C:\aptat\test_dir\assignment\S\P\4.7 学生管理系统_2017060203019_20180428235451\
 4.7 学生管理系统_2017060203019_20180428235451.cpp(51) : error C3861: “printf”: 找不到标识符回车C:\aptat\test_dir\assignment\S\P\4.7 学生管理系统_2017060203019_20180428235451\
 4.7 学生管理系统_2017060203019_20180428235451.cpp(52) : error C3861: “printf”: 找不到标识符回车C:\aptat\test_dir\assignment\S\P\4.7 学生管理系统_2017060203019_20180428235451\
 4.7 学生管理系统_2017060203019_20180428235451.cpp(56) : error C3861: “printf”: 找不到标识符回车C:\aptat\test_dir\assignment\S\P\4.7 学生管理系统_2017060203019_20180428235451\
 4.7 学生管理系统_2017060203019_20180428235451.cpp(58) : error C3861: “printf”: 找不到标识符回车C:\aptat\test_dir\assignment\S\P\
 4.7 学生管理系统_2017060203019_20180428235451\4.7 学生管理系统_2017060203019_20180428235451.cpp(59) : error C3861: “printf”: 找不到标识符回车C:\aptat\test_dir\assignment\S\P\
 4.7 学生管理系统_2017060203019_20180428235451\4.7 学生管理系统_2017060203019_20180428235451.cpp(60) : error C3861: “printf”: 找不到标识符回车C:\aptat\test_dir\assignment\S\P\
 4.7 学生管理系统_2017060203019_20180428235451\4.7 学生管理系统_2017060203019_20180428235451.cpp(64) : error C3861: “printf”: 找不到标识符回车C:\aptat\test_dir\assignment\S\P\
 4.7 学生管理系统_2017060203019_20180428235451\4.7 学生管理系统_2017060203019_20180428235451.cpp(66) : error C3861: “printf”: 找不到标识符回车*/

