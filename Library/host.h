#pragma once
#include "Library.h"
#include<string>

class host :
	public Library
{
public:
	host();
	void AddBook(Book newbook);//����ͼ��
	void AddBooknum(string name, string author, int num);//��������ͼ������
	void DeleteBook(string bookname, string author);//ɾ��ͼ�飬�ɸĶ���ֻ������������
	void printbook(Book a);//��ӡһ�����ȫ����Ϣ
	void ShowAllBook();//��ӡ����ͼ���������Ϣ
	~host();
};

