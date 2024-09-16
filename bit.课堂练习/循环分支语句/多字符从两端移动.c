#include<stdio.h>
int main()
{

	char arr1[] = "###################";
	char arr2[] = "!!!!!hello bit!!!!!";
	int j = sizeof(arr2)/sizeof(arr2[0])-2;
	int i = 0;
	while(j>i)
	{
		arr1[i] = arr2[i];
		arr1[j] = arr2[j];
		i++;j--;
		puts(arr1);
	}
	return 0;
}
