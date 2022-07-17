#include<stdio.h>
//int main()
//{
//	//char ch='q';
//	//char *pc=&ch;
//	//本质上是把字符串的首字符的地址存储在了ps中
//
//	char* ps = "hello world";
//
//	return 0;
//}

//int main()
//{
//	int k;
//	int* kptr;
//	k = 7;
//	kptr = &k;
//	printf("k的地址是%p\nnptr的值是%p\n", &k, kptr);
//	return 0;
//}

//6.4
//int squrebyvalue(int n)
//{
//	return n * n;
//}
//void squrebypoint(int* nptr)
//{
//	*nptr = (*nptr) * (*nptr);
//}
//int main()
//{
//	int m = 5;
//	printf("%d\n", squrebyvalue(m));
//	printf("%d\n", m);
//	squrebypoint(&m);
//	printf("%d\n", m);
//	printf("%d\n", m);
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	void swap(int*, int*);
//	printf("交换之前：%d，%d\n", a, b);
//	swap(&a, &b);
//	printf("交换之后：%d, %d\n", a, b);
//	return 0;
//}
//void swap(int* a, int* b)//交换两个数字的值
//{
//	*a = *a + *b;
//	*b = *a - *b;
//	*a = *a - *b;
//}

//6.6
//void paws(int u, int v)
//{
//	int t = u;
//	u = v;
//	v = t;
//	printf("u=%d\tv=%d\n", u, v);
//}
//int main()
//{
//	int x = 1;
//	int y = 2;
//	paws(x, y);
//	printf("x=%d\ty=%d\n", x, y);
//	return 0;
//}

