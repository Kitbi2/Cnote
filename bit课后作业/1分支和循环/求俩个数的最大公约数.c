#include<stdio.h>
/*int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d",&a,&b);
	int max = a>b?a:b;
	while(1)
	{
		if(a%max == 0&& b%max == 0)
		{
			printf("���Լ��Ϊ%d",max);
			break;
		}
		max--;
	}
	return 0;
}*/

//����Ϊշת�����
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d",&a,&b);
	while(a%b)
	{
		int d = b;
		b = a%b;
		a = d;	
	}	
	printf("%d",b);
} 
