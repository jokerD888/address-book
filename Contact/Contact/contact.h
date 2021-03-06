#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};
struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};

struct Contact
{
	struct PeoInfo data[MAX];//存放一个信息
	int size;   //记录当前已有的元素个数
};

//声明函数
//初始化
void InitContact(struct Contact* ps);
//添加一个信息
void AddContact(struct Contact* ps);
//打印信息
void ShowContact(const struct Contact* ps);
//删除指定联系人
void DelContact(struct Contact* ps);
//查找指定联系人信息
void Searchtact(const struct Contact* ps);
//修改指定联系人信息
void ModifyContact(struct Contact* ps);
//排序通讯录内容
void SortContact(struct Contact* ps);




