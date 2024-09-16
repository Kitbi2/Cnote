#include<stdio.h>
int add(int i)
{
	if(i)
	return i%10+add(i/10);
}
int main()
{
	int i = 0;
	scanf("%d",&i);
	printf("%d",add(i));
	return 0;
}
