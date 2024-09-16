#include<stdio.h>
int main()
{
	int a = 0;
	int conut = 0;
	for(a = 0;a<=100;a++)
	{
		if(a%10 == 9)
			conut++;
		if(a/10 == 9)
			conut++;
	}
	printf("%d",conut);
	return 0;
}
