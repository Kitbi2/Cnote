#include<stdio.h>
void Add(int *ap)
{
	(*ap)++;
}
int main()
{
	int num = 0;
	Add(&num);
	printf("%d",num);
	return 0;
}
