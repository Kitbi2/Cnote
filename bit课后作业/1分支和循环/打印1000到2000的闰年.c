#include<stdio.h>
int main()
{
	int a = 0;
	for(a = 1000;a<=2000;a++)
	{
		if(a%4 == 0&&a%100!= 0)
		{
			printf("%d ",a);
		}
		else if(a%400 == 0)
		printf("%d ",a);
	}
	return 0;
}
