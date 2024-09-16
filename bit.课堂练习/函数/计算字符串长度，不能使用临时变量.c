#include<stdio.h>
int my_strlen(char *ap)
{
	if(*ap!=0)
	{
		return 1+my_strlen(ap+1);
	}
	else return 0;
}
int main()
{
	char arr[] = "bit";
	int i = my_strlen(arr);
	printf("%d",i);
	return 0;
}
