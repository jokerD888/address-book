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
	struct PeoInfo data[MAX];//���һ����Ϣ
	int size;   //��¼��ǰ���е�Ԫ�ظ���
};

//��������
//��ʼ��
void InitContact(struct Contact* ps);
//���һ����Ϣ
void AddContact(struct Contact* ps);
//��ӡ��Ϣ
void ShowContact(const struct Contact* ps);
//ɾ��ָ����ϵ��
void DelContact(struct Contact* ps);
//����ָ����ϵ����Ϣ
void Searchtact(const struct Contact* ps);
//�޸�ָ����ϵ����Ϣ
void ModifyContact(struct Contact* ps);
//����ͨѶ¼����
void SortContact(struct Contact* ps);




