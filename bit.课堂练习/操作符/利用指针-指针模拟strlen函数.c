#include<stdio.h>
int my_strlen(char *str)
{
	char *start = str;
	while(*start!='\0')
	{
		start++;
	}
	return start - str;
}
int main()
{
	char arr[] = "abc";
	printf("%d",my_strlen(arr)); 
	return 0;
}
