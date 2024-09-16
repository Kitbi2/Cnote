## 表达式求值：

1.表达式的求值顺序一部分是由操作符的优先级和结合性来决定的，同样有些表达式的操作数在求值的过程中会进行类型转化

## 隐式类型转化：

### 1.整型提升：短整型和字符类型操作数使用之前转化为普通类型

```c
char a,b,c;
a = b+c;
```

b和c的值被提升到普通整型，然后进行加法运算；

加法运算完成之后，结果被截断，然后存储于a中

### 2.如何进行提升：按照变量类型的数据类型的符号位来进行提升的

```c
#include<stdio.h>
int main()
{
	char a = 3;
	char b = 127;
	char c = a+b;
	printf("%d",c);
	return 0;
}//分析一下这串代码结果想想为什么是做个结果
```

分析一下下面例子：

```c
#include<stdio.h>
int main()
{
	char a = 0xb6;
	short b = 0xb600;
	int c = 0xb6000000;
	if(a == 0xb6)
		printf("a");
	if(b == 0xb600)
		printf("b");
	if(c == 0xb6000000)
		printf("c");
	return 0;
}
```

```c
#include<stdio.h>
int main()
{
	char c = 1;
	printf("%u\n",sizeof(c));
	printf("%u\n",sizeof(+c));
	printf("%u\n",sizeof(-c));
	return 0;
}//对short和char类型的变量进行算术操作时候需要整型提升
```

### 任何一个表达式具有两种属性：值属性和类型属性

### 这里还有一个点：就是整型提升的时候按照最高位补



# 算术转换：

1.当int类型和float类型进行运算的时候，int类型向float类型转化，就是一个宗旨低精度向高精度转化

# 操作符的属性：

1.操作符的优先级

2.操作符的结合性

3.是否控制求值顺序