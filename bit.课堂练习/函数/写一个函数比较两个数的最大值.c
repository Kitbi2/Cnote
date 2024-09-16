#include<stdio.h>
int max(int a,int b)
{
	return a>b?a:b;
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("×î´óÖµ£º%d",max(a,b));
	return 0;
}
