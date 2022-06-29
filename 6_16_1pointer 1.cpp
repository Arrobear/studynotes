//#include<stdio.h>
//int main()
//{
//	int a=10;//在内存中要分配空间  -4 个字节
//	&a;//:取4个字节对应的4个地址的第一个地址
//	printf("%p\n", &a);//%p:用来打印地址
//	int* pa = &a;//pa是用来存放地址的，在c语言中pa叫做指针变量
//	//*:说明pa是指针变量
//	//int：说明pa指向的对象是int类型
//	char ch = 'w';
//	char* pc = &ch;
//
//	return 0;
//}
// 
//指针：地址
// 
//32位：32根地址线-物理线-通电-1/0
// 4294967296Bit
// /8=536870912Byte
// /1024=524288KB
// /1024=512MB
// /1024=0.5GB
//64位：
//电信号转换成数字信息：1和0组成的二进制序列
//一个内存单元是一个字节，然后分配地址
//char  -1 byte = 1 个地址

//int main()
//{
//	int a = 10;
//
//	int* pa = &a;
//
//	*pa = 20;//*解引用操作，*pa：通过pa中的地址找到a
//
//	return 0;
//}


//指针的大小是相同的：指针是用来存放地址的
//指针所需要的空间取决于“地址”需要多少空间
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	//32位  -32 bit - 4 byte
//	//64位  -64 bit - 8 byte
//}
// 
// //↓cout函数的用法
//#include<iostream>
//using namespace std;
//int main()
//{
//	int i;
//	scanf("%d", &i);
//	cout << "fuck "<<endl;
//	cout << "the ";
//	cout << "world!";
//	return 0;
//}
