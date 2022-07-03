#include<stdio.h>
//赋值操作符
// =     +=		-=		*=		/=		>>=		<<=		%=		&=		|=		^=
//
//int main()
//{
//	int a = 10;
//	a = 100;
//	a = a + 100;//1
//	a += 100;//2
//}

//单目操作符:只有一个数的操作符
// !  -  +  &  sizeof  ~  --  ==  *  （类型）(强制类型转换）
//
//int main()
//{
//	int flag = 5;
//	printf("%d\n", !flag);
//	if (flag)
//	{
//		printf("hello world!!\n");
//	}
//	if (!flag)
//	{
//		printf("the world is destried...\n");
//	}
//	return 0;
//}
//int main()//sizeof
// sizeof 括号中的表达式不参与运算
////可以写成类似： sizeof a(变量)
//{
//	int a = 10;
//	char arr[10] = { 0 };
//	printf("%d\n", sizeof(a));
//	return 0;
//}

// ~:对一个数的二进制位按位取反(对补码)
//int main()
//{
//	int a = -1;
//	int b = ~a;
//	printf("%d", b);
//	return 0;
//}

int main()
{
	int a = 13;
	//把a的二进制位的第5位置成1
	a = a | (1 << 4);
	//把a的二进制位的第5位置成0
	a = a & (~(1 << 4));
	return 0;
}