#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void gotoxy(int x,int y)//指定显示位置，注意x，y的值应该是从1开始的，和坐标值差1。
{ 
	COORD c; 
	c.X=x-1; 
	c.Y=y-1; 
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c); 
} 
int main() 
{
	system("color f3"); 
	char ch=1;//输入的字符，初始设为1。
	int hang=0;//用来控制光标的行位置。共有0，3，6，9,  12
                        //四个有效值，初始设为0，即处于第1个功能项
	while(!(hang==12&&ch==13))//循环选择。
		{
		 //显示5个功能项
	
		gotoxy(20,12+hang);
		printf("%c%c",16,16); 	 				//gamedifficult_show();
		gotoxy(22,15);
		printf("开始游戏");
		gotoxy(22,18);
		printf("按键设置");
		gotoxy(22,21);
		printf("难度设置");
		gotoxy(22,24);
		printf("游戏制作");
		gotoxy(22,27);
		printf("退出");
		gotoxy(1,25);
		ch=getch();//无回显获取一个字符
		if(ch=='s')
		{
		hang+=3;
		if(hang>12)hang=hang-3;
		gotoxy(20,6+hang);
		printf("  ");
		gotoxy(20,8+hang);
		printf("%c%c",16,16); 

		}
		else if(ch=='w')//’w’
		{
			hang=hang-3;
		if(hang<0)
			hang=hang+3;
			gotoxy(20,10+hang);printf("  ");//抹掉当前行的箭头 
			gotoxy(20,8+hang); printf("%c%c",16,16); 
			
			}
			
			
		}
		
}


