计算字符串长度:strlen(想要计算字符串的地址)

拷贝字符串:strcpy(目标字符串地址，源字符串的地址)

```c
my_strcpy(char *str1,char *str2)
{
	while(*str2)
	{
		*str1 = *str2;
	}
}
```

注：拷贝到'\0'为止

追加字符串:strcat (目标字符串的地址，源字符串的地址)

```c
my_strcat(char *str1,char *str2)
{
	while(*str1)
    {
		str1++;
    }
    while(*str1++ = *str2++)
    {
        *str1 = *str2;
    	
    }
}
```

注：在目标字符串中找到'\0'后开始追加，直到追加至源字符串的'\0'

比较字符串:strcmp(两个参数是比较字符串的地址)直至'\0'为止

```c
my_strcmp(char *str1,char *str2)
{
	while(*str1 == *str2)
	{
		str1++;
		str2++;
	}
}
```

```c
char* my_strstr(char *str1,char *str2)
{
	const char *s1 = str1;
	const char *s2 = str2;
	while(*str1)
	{
		s1 = str1;
		while(*s2&&*s1(*str1 == *str1))
		{
			s1++;
			s2++;
		}
		if(*s2 == '\0')
			return (char *)str1;
		str1++;
	}
	return NULL;
}
```

strkot(你要分割字符串的地址，以什么为分割字符的地址)函数分割字符串的函数

工作原理：如果不是空指针就按传进去的地址开始分割，如果是空指针就按照上次分割完的地址之后开始分割

strncat和之前的strncat相比多了一个参数，这一个参数表达的是追加字符的个数

strncpy和之前的strcpy相比多了一个参数，这一个参数是拷贝的字符个数

![image-20220104121854052](C:\Users\old\AppData\Roaming\Typora\typora-user-images\image-20220104121854052.png)

判断是不是某种类型字符的函数

![image-20220104122046588](C:\Users\old\AppData\Roaming\Typora\typora-user-images\image-20220104122046588.png)

字符大写转小写，或者小写转大写  
