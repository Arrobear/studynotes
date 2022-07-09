#include<stdio.h>
#include<string.h>
#include<assert.h>

//模拟实现strcpy

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;
//}

//void my_strcpy(char* dest, char* src)
//{
//	assert(src != NULL);//断言
//	assert(dest != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//void my_strcpy(char* dest,const char* src)
//{
//	assert(src != NULL);//断言
//	assert(dest != NULL);
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//
//int main()
//{
//	char arr1[20] = "abcdefg";
//	char arr2[] = "hello";
//	my_strcpy(arr1,arr2);//1.目标空间的起始地址2.源空间的起始地址
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	// 1.
//	//int num = 10;
//	//int* p = &num;
//	//*p = 20;
//	//
//	//printf("%d\n", num);
//	// 
//	// 2.
//	// const :修饰变量，这个变量被称为常变量，不能被修改，但本质上是变量
//	// 
//	const int num = 10;
//	int n = 100;
//	//const int* p = &num;//error
//	//const 修饰*p，num的值不能被改变
//	//int* const p = &num;
//	//const 修饰指针变量p，*p（指针指向的内容）可以被改变
//	//*p = 20;
//	p = &n;
//	//const 并没有限制p,指针变量本身可以修改
//	//但是*p依旧不能改变
//	n = 200;
//
//	printf("%d\n", *p);
//	return 0;
//}


