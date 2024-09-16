#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d",&a);
	for(b = 0;b<a;b++)
	{
		for(c = 0;c<a*2-1;c++)
		{
			if(c<a-b-1||c>a+b-1)
				printf(" ");
			else 
				printf("*");
		}
		printf("\n");
	}
	for(b = 0;b<a-1;b++)
	{
		for(c = 0;c<a*2-1;c++)
		{
			if(c<a-b-1||c>a+b-1)
				printf("*");
			else 
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}
