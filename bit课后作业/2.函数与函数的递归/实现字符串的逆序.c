#include<stdio.h>
#include<string.h>
int my_strlen(char *ap)
{	
	if(*ap)
		return 1+my_strlen(ap+1);
}
void reverse_string(char arr[],int sz)
{
	char tmp = arr[0];
	arr[0] = arr[sz-1]; 
	arr[sz-1] = '\0';
	if(my_strlen(arr+1))
		reverse_string(arr+1,my_strlen(arr+1));
	arr[sz-1] = tmp;
	 
}
void print(char arr[],int sz)
{
	int i = 0;
	for(i = 0;i<sz;i++)
	{
		printf("%c",arr[i]);
	}
}
int main()
{
	char arr[] = "abcdef";
	int sz = my_strlen(arr);
//	printf("%d",my_strlen(arr));
	reverse_string(arr,sz);
	print(arr,sz);
	return 0;
}
