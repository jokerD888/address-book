#define _CRT_SECURE_NO_WARNINGS 1
//���ܣ�
//1.���1000�����ѵ���Ϣ�����֣��绰���Ա�סַ�����䣩
//2.��Ӻ�����Ϣ
//3.ɾ��ָ��������Ϣ
//4.���Һ�����Ϣ
//5.�޸ĺ�����Ϣ
//6.��ӡ������Ϣ
//7.����

#include"contact.h"
void menu()
{
	printf("***************************************\n");
	printf("*****1.add       2.del*****************\n");
	printf("*****3.search    4.modi****************\n");
	printf("*****5.show      6.sort****************\n");
	printf("*****0.exit            ****************\n");
	printf("***************************************\n");
}
int main(void)
{
	int input = 0;
	
	struct Contact con;//����ͨѶ¼

	InitContact(&con);   //��ʼ��ͨѶ¼

	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			Searchtact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case EXIT:
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
		
	} while(input);
	return 0;
}
