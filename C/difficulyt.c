#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void gotoxy(int x,int y)//ָ����ʾλ�ã�ע��x��y��ֵӦ���Ǵ�1��ʼ�ģ�������ֵ��1��
{ 
	COORD c; 
	c.X=x-1; 
	c.Y=y-1; 
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c); 
} 
int main() 
{
	system("color f3"); 
	char ch=1;//������ַ�����ʼ��Ϊ1��
	int hang=0;//�������ƹ�����λ�á�����0��3��6��9,  12
                        //�ĸ���Чֵ����ʼ��Ϊ0�������ڵ�1��������
	while(!(hang==12&&ch==13))//ѭ��ѡ��
		{
		 //��ʾ5��������
	
		gotoxy(20,12+hang);
		printf("%c%c",16,16); 	 				//gamedifficult_show();
		gotoxy(22,15);
		printf("��ʼ��Ϸ");
		gotoxy(22,18);
		printf("��������");
		gotoxy(22,21);
		printf("�Ѷ�����");
		gotoxy(22,24);
		printf("��Ϸ����");
		gotoxy(22,27);
		printf("�˳�");
		gotoxy(1,25);
		ch=getch();//�޻��Ի�ȡһ���ַ�
		if(ch=='s')
		{
		hang+=3;
		if(hang>12)hang=hang-3;
		gotoxy(20,6+hang);
		printf("  ");
		gotoxy(20,8+hang);
		printf("%c%c",16,16); 

		}
		else if(ch=='w')//��w��
		{
			hang=hang-3;
		if(hang<0)
			hang=hang+3;
			gotoxy(20,10+hang);printf("  ");//Ĩ����ǰ�еļ�ͷ 
			gotoxy(20,8+hang); printf("%c%c",16,16); 
			
			}
			
			
		}
		
}


