#include<stdio.h>
//int main()
//{
//	//int(*p)[4];
//	//ָ�����p��ָ��һ����4��int��Ԫ����ɵ����顣
//	int a[3][4] = { {1,3,5,7},{9,11,13,15},{17,19,21,23} };
//	int i;
//	int* ip;
//	int(*p)[4];
//	p = a + 1;//ָ������a�ĵڶ���
//	ip = p[0];//ָ��a[1][0]
//	for (i = 1; i <= 4; ip += 2, i++)
//	{
//		printf("%d\t", *ip);
//	}
//	printf("\n");
//	p = a;
//	for (i = 0; i < 2; p++, i++)
//	{
//		printf("%d\t", *(*(p + i) + 1));
//	}
//	return 0;
//}

//ָ�����飺
//����������ֵʵ������
//#define N sizeof ap/sizeof ap[0]
//int a, b, c, d, e, f;
//int main()
//{
//	int* ap[] = { &a,&b,&c,&d,&e,&f };
//	int k, j, t;
//	printf("����a,b,c,d,e,f.\n");
//	for (k = 0; k < N; k++)
//		scanf("%d", ap[k]);
//	for (j = 0; j + k < N; j++)
//	{
//		if (*ap[j] > *ap[j + 1])
//		{
//			t = *ap[j];
//			*ap[j] = *ap[j + 1];
//			*ap[j + 1] = t;
//		}
//	}
//	for (k = 0; k < N; k++)
//		printf("%d\t", *ap[k]);
//
//	return 0;
//}

