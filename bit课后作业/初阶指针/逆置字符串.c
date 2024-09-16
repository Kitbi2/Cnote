#include<stdio.h>
void reverse(char *str)
{
	char *start = str;
	while(*start)
	{
		start++;
	}
	start = start-1;
	while(str<start)
	{
		char tmp = *str;
		*str = *start;
		*start = tmp;
		start--;
		str++;
	}
}
int main()
{
	char arr[] = "abcdef";
	reverse(arr);
	puts(arr);
	return 0;
} 
