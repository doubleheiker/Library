#ifndef STU_BOOK_H
#define STU_BOOK_H
#include <string>
using namespace std;
//ѧ��
typedef struct
{
	int id;//ѧ��ѧ��
	char* name = (char*) new char[30];//ѧ������
	int borrowsum;//�ѽ��ĵ��鱾��
	int unreturn;//δ�黹�鱾��
	int b[5];//�ѽ���ı��
	char* borrowdays = (char*) new char[30];//�ϴν��ĵ�ʱ��
}Student;
//ͼ��
typedef struct
{
	int id = 0;//ͼ������ţ���ʼ��Ϊ0������һ��ͼ���һ
	int borrowCount = 0;//ͼ�����������ʼֵΪ0
	char* name = (char*) new char[20];//����
	char* author = (char*) new char[20];//����
	char* kind = (char*) new char[20];//����
	double price;//�۸�
	int sum = 0;//ͼ��ݴ����ܿ��
	int noenum = 0;//ͼ��ݴ������п��
	int appointment= 0;//ԤԼ������ʼֵΪ0
	bool right;//�Ƿ�ɽ裬��ʼֵΪTRUE
	char* borrowdate = (char*) new char[30];//���һ�α������ʱ��
	char* returndate = (char*) new char[30];//ͼ�����һ�α��黹��ʱ��
	char* room = (char*) new char[30];//ͼ����������
}Book;
#endif // !STU_BOOK_H