#define _CRT_SECURE_NO_WARNINGS 1
//什么是BUG？
//调试是什么
//调试是在找bug的过程
//调试的步骤
//发现错误的存在
//以隔离、消除等方式对错误进行定位
//确定错误产生的原因
//提出纠正错误的解决办法
//对程序错误给予改在，重新测试；
//结构体的声明
//结构是一些值的集合
//语法
//struct tag
//{
//	member-list;成员名
//}variable-list;变量列表
//描述一个学生
//名字、年龄、电话、性别
//struct stu//结构体关键字和结构体标签/结构体类型
//{
//	//成员变量，定义结构体类型此时不占空间等价于（int short double等类型）
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//三个全局的结构体变量
//int main()
//{
//	struct stu s;//创建结构体变量。这里用类型时占用空间 /s是局部的结构体变量
//	return 0;
//}
//typedef struct stu//结构体关键字和结构体标签/结构体类型
//{
//	//成员变量，定义结构体类型此时不占空间等价于（int short double等类型）
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;//stu=struct stu为结构体类型名
//结构体的成员可以时不同的类型
//结构体变量的定义
//typedef struct stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;
//int main()
//{
//	stu s1={"张三",20,"15190193823","男"};//局部变量
//	struct stu s2={"李四",21,"15151619097","女"};
//	//变量的初始化
//	return 0;
//}
#include <stdio.h>
//struct s
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct t
//{
//	char ch[10];
//	struct s S;
//	char *pc;
//};
//int main()
//{
//	char arr[]="hello bit\n";
//	struct t T={"hehe",{100,'w',"hello world",3.14},arr};//初始话结构体
//	printf("%s\n",T.ch);
//	printf("%s\n",T.pc);
//	printf("%d\n",T.S.a);//100
//	printf("%lf\n",T.S.d);//3.14
//	return 0;
//}
typedef struct stu
{
	char name[20];
	short age;
	char tele[12];
	char sex[7];
}S;
void print1(S s)
{
	printf("name: %s\n",s.name);
	printf("age: %d\n",s.age);
	printf("tele: %s\n",s.tele);
	printf("sex: %s\n",s.sex);
}
void print2(S* s)
{
	printf("name: %s\n",s->name);
	printf("age: %d\n",s->age);
	printf("tele: %s\n",s->tele);
	printf("sex: %s\n",s->sex);
}
int main()
{
	S s={"jelly",25,"17521010587","gender"};
	print1(s);
	print2(&s);
	return 0;
}