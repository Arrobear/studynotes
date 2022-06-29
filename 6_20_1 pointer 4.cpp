#include<stdio.h>
//int main()
//{
//	int values[5] = {0};
//	int* vp=values;
//	for (vp = &values[5]; vp > &values[0];)
//	{
//		*--vp = 0;
//	}
//	for (vp = &values[4]; vp > &values[0];vp--)
//	{
//		*vp = 0;
//	}
//	return 0;
//} 

//int main()
//{
//	//指针和数组
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//数组名是数组首元素的地址
//	printf("%p\n", &arr[0]);
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%p<-->%p\n", &arr[i], p + i);
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

////扩展：
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	//arr[2] <=> *（arr + 2） <=> *(p + 2) <=> *(2 + p) <=> *(2 + arr);
//	//2[arr] <=> * (2 + arr)
//	//[]:是一个操作符,支持交换律，	2和arr是两个操作数
//	//a+b
//	//b+a
//	//arr[2] --> *(arr+2) --> * (2+arr) --> 2[arr]
//	//arr[2] <=> p[2] <=> *(arr+2)
//	return 0;
//}


////二级指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa是指针变量，一级指针
//	//pa也是一个变量，&pa：取出pa在内存中的起始地址
//	int** ppa = &pa;//ppa:二级指针变量
//	//多级指针同理
//	return 0;
//}

//指针数组：本质上是一个数组
//
//int main()
//{
//	int arr[10];//整形数组 - 存放整型的数组
//	char ch[5];//字符数组 - 存放字符的数组
//	int* p[5];//整型指针数组
//
//	return 0;
//}