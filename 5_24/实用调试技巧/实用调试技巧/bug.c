#define _CRT_SECURE_NO_WARNINGS 1
//ʲô��BUG��
//������ʲô
//����������bug�Ĺ���
//���ԵĲ���
//���ִ���Ĵ���
//�Ը��롢�����ȷ�ʽ�Դ�����ж�λ
//ȷ�����������ԭ��
//�����������Ľ���취
//�Գ�����������ڣ����²��ԣ�
//�ṹ�������
//�ṹ��һЩֵ�ļ���
//�﷨
//struct tag
//{
//	member-list;��Ա��
//}variable-list;�����б�
//����һ��ѧ��
//���֡����䡢�绰���Ա�
//struct stu//�ṹ��ؼ��ֺͽṹ���ǩ/�ṹ������
//{
//	//��Ա����������ṹ�����ʹ�ʱ��ռ�ռ�ȼ��ڣ�int short double�����ͣ�
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//����ȫ�ֵĽṹ�����
//int main()
//{
//	struct stu s;//�����ṹ�����������������ʱռ�ÿռ� /s�Ǿֲ��Ľṹ�����
//	return 0;
//}
//typedef struct stu//�ṹ��ؼ��ֺͽṹ���ǩ/�ṹ������
//{
//	//��Ա����������ṹ�����ʹ�ʱ��ռ�ռ�ȼ��ڣ�int short double�����ͣ�
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;//stu=struct stuΪ�ṹ��������
//�ṹ��ĳ�Ա����ʱ��ͬ������
//�ṹ������Ķ���
//typedef struct stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;
//int main()
//{
//	stu s1={"����",20,"15190193823","��"};//�ֲ�����
//	struct stu s2={"����",21,"15151619097","Ů"};
//	//�����ĳ�ʼ��
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
//	struct t T={"hehe",{100,'w',"hello world",3.14},arr};//��ʼ���ṹ��
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