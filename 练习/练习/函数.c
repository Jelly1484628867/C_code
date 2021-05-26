#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//创建一个整形数组，对整型数组的操作
//void Init(int arr[],int sz)
//{
//	int i=0;
//	for(i=0;i<sz;i++)
//	{
//		arr[i]=0;
//
//	}
//}
//void Print(int arr[],int sz)
//{
//	int i=0;
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//}
//void Recerse(int arr[],int sz)
//{
//	int left=0;
//	int right=sz-1;
//	while(left<right)
//	{
//		int tmp=arr[left];
//		arr[right]=tmp;
//		left++;
//		right--;
//	}
//	
//}
//int main()
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	//Init(arr,sz);
//	Print(arr,sz);
//	Recerse(arr,sz);
//	Print(arr,sz);
//	return 0;
//
//}

//数组交换
//int main()
//{
//	int arr1[]={1,2,3,5,7,9};
//	int arr2[]={2,4,6,8,0};
//	int sz=sizeof(arr1)/sizeof(arr1[0]);
//	int tmp=0;
//	int i=0;
//	for(i=0;i<sz;i++)
//	{
//		tmp=arr1[i];
//		arr1[1]=arr2[i];
//		arr2[i]=tmp;
//	}
//
//	return 0;
//
//}

//写一个代码，写一个二进制中有几个1
#include <stdlib.h>
int count_bit_one(int n)
{
	int count=0;
	while(n)
	{	
		if(n%2==1)
		{
			count++;
		}
		n=n/2;
	}
	return count;
}
int main()
{	
	int a=0;
	scanf("%d",&a);
	//写一个函数求a 的二进制（补码）表示中有几个1
	int count=count_bit_one(a);
	printf("count=%d\n",count);
	system("pause");//system库函数执行系统命令=pause(暂停)
	return 0;
}