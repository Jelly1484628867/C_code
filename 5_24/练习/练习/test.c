#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//int count_bit_one(unsigned int n)
//{
//	int count = 0;
//	/*while(n)
//	{	
//		if(n%2==1)
//		{
//			count++;
//		}
//		n=n/2;
//	}*/
//	int i=0;
//	for(i=0;i<32;i++)
//	{
//		if(((n>>i)&1)==1)
//		{
//			count ++;
//		}
//	}
//	return count;
//}
//int main()
//{	
//	int a=0;
//	int count=count_bit_one(a);
//	scanf("%d",&a);
//	дһ��������a �Ķ����ƣ����룩��ʾ���м���1
//	printf("count=%d\n",count);
//	system("pause");//system�⺯��ִ��ϵͳ����=pause(��ͣ)
//	return 0;
//}

//int get_diff_bit(int n,int m)
//{
//	
//	int tmp=m^n;
//	int count =0;
//	while(tmp)
//	{
//		if(tmp==tmp&(tmp-1))
//			count ++;
//	}
//		return count;
//}
//int main()
//{
//	int n=0;
//	int m=0;
//	int count=get_diff_bit(n,m);
//	scanf("%d%d\n",&n,&m);
//	printf("%d",count);
//	return 0;
//}
//void print(int n)
//{
//	int i=0;
//	printf("����λ��\n");
//	for(i=30;i>=0;i+=2)
//	{
//		printf("%d",(n>>i)&1);
//	}
//	printf("\n");
//	printf("ż��λ��\n");
//	for(i=31;i>=1;i+=2)
//	{
//		printf("%d",(n>>i)&1);
//	}
//	printf("\n");
//}
//int main()
//{
//
//	int n=0;
//	scanf("%d",&n);
//	printf("%d\n",n);
//	return 0;
//}