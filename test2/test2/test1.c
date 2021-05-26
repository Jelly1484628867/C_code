#define _CRT_SECURE_NO_WARNINGS 1
//用指针打印数组内容
#include <stdio.h>
//void print(int *p ,int sz)
//{
//	int i=0;
//	for(i=0;i<sz;i++)
//	{printf("%d ",*(p+i));}
//}
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	print(arr,sz);
//	return 0;
//
//}

//递归作业
//int Fun(int n)
//{
//	if(n==5)
//		return 2;
//	else 
//		return 2*Fun(n+1);
//}

//打印99乘法表
//void print_table(int n)
//{
//	int i=0;
//	for(i=1;i<=n;i++)
//	{
//		int j=0;
//		for(j=1;j<=i;j++)
//		{
//			printf("%d*%d=%-3d ",i,j,i*j);
//		}
//		printf("\n");
//		}
//}
//int main()
//{
//	int n=0;
//	scanf("%d",&n);
//	print_table(n);
//	return 0;
//}

//字符串的逆序
//int my_strlen(char *arr)
//{
//	int count=0;
//	while(*arr!='\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//void reverse_string(char *arr)
//{
//	int left=0;
//	int right=my_strlen(arr)-1;
//	while(left<right)
//	{
//		int tmp=arr[left];
//		arr[left]=arr[right];
//		arr[right]=tmp;
//		left++;
//		right--;
//	}
//}
//void reverse_string(char *arr)
//{
//	char tmp=arr[0];
//	int len=my_strlen(arr);
//	arr[0]=arr[len-1];
//	arr[len-1]='\0';
//	if(my_strlen(arr+1)>=2)
//		reverse_string(arr+1);
//	arr[len-1]=tmp;
//
//}
//int main()
//{
//	char arr[]="abcdefg";
//	reverse_string(arr);
//	printf("%s\n",arr);
//	return 0;
//}
//写出一个代码计算一个数的所有元素数值之和
//int sum_add(int num)
//{
//	if(num>9)
//	{
//		return num%10+sum_add(num/10);
//	}
//	else
//		return num;
//}
//int main()
//{
//	unsigned int num=0;
//	int sum=0;
//	scanf("%d",&num);
//	sum=sum_add(num);
//	printf("sum=%d\n",sum);
//	return 0;
//}
//计算n的k次方的值
//int Pow(int n,int k)
//{
//	int ret=0;
//	if(k<0)
//	{
//		ret=1.0/Pow(n,-k);
//		return ret;
//	}
//	else if(k==0)
//	{
//		return 1;
//	}
//	else
//	{
//		ret=n*Pow(n,k-1);
//		return ret;
//	}
//}
//int main()
//{
//	int n=0;
//	int k=0;
//	double ret =0.0;
//	scanf("%d %d",&n,&k);
//	ret=Pow(n,k);
//	printf("%lf\n",ret);
//	return 0;
//}

