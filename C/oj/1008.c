#include<stdio.h>
int main()
{
	int x;
	char y;
	scanf("%d",&x);
	switch ((int)(x/10+0.5))
	{
	case 10:y = 65;		break; 
	case 9:y = 65;		break;
	case 8:y = 66;		break;
	case 7:y = 67;		break;
	case 6:y = 68;		break;
	case 5:y = 69;		break;
	case 4:y = 69;		break;
	case 3:y = 69;		break;
	case 2:y = 69;		break;
	case 1:y = 69;		break;
	case 0:y = 69;		break;
	
	default:printf("error");
}
	printf("%c",y);
	return 0;
}
