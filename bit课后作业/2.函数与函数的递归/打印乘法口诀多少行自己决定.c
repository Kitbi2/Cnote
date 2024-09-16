#include<stdio.h>
void multiplication_table(int i)
{
	int a = 0;
	int j = 0;
	for(a = 1;a<=i;a++)
	{
		for(j = 1;j<=a;j++)
		{
			printf("%d*%d=%-2d ",a,j,a*j);
		}
		printf("\n");
	}
}
int main()
{
	int i = 0;
	scanf("%d",&i);
	multiplication_table(i);
	return 0;
	
 } 
