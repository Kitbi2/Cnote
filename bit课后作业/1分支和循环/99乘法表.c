#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	for(i = 1;i<=9;i++)
	{
		for(j = 1;j<=i;j++)
		{
			printf("%d*%d=%-2d ",i,j,j*i);
		}
		printf("\n");
	}
	return 0;
	
}
