/**************解法一*******************/ 
/*#include<stdio.h>
void print(char str[],int sz)
{
	int i = 0;
	for(i = 0;i<sz-1;i++)
	{
		printf("%c ",str[i]);
	}
}
int main()
{
	int a = 0;
	scanf("%d",&a);
	char str[] = "abcdef";
	int i = 0;
	char tmp ;
	int sz = sizeof(str)/sizeof(str[0]);
	while(a)
	{
		char tmp = str[i];
		
		for(i = 0;i<sz-2;i++)
		{	
			str[i] = str[i+1];
			printf("%c %c\n",str[i],str[i+1]);
		}
		str[i] = tmp;
	
		a-- ;
	}
	print(str,sz);
	return 0;
 } */
 /************解法二**********/
#include<stdio.h>
#include<string.h> 
void reverse(char *start,char *end)
{
	while(start<end)
	{
		char tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
	}
}
void string_left_rotate(char *str,int a)
{
	int sz = strlen(str);
	reverse(str,str+a-1);//左 
	reverse(str+a,str+sz-1);//右 
	reverse(str,str+sz-1); //整体 
}
void print(char *str,int sz)
{
	int i = 0;
	for(i = 0;i<sz;i++)
	{
		printf("%c ",str[i]);
	}
}
#include<stdio.h> 
int main()
{
	int a = 0;
	scanf("%d",&a);
	char str[] = "abcdef";
	int sz = strlen(str);
	string_left_rotate(str,a);
	print(str,sz);
	return 0;
}
 
