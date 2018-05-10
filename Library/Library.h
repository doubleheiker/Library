/*ʵ�ֹ��ܹ��ܣ�*/
/*1.��ͼ����Ϣ������ӡ��޸ġ�ɾ�������ࡢ��ѯ�����¡�ͳ�ơ�����������Ȳ�����ʵ�ֶ�ͼ��Ĺ���*/
/**(1).���°���������ӡ��޸ġ�ɾ������Ϣ**/
#ifndef LIBRARY_H
#define	LIBRARY_H
#include"stu_book.h"
#include<vector>
class Library
{
protected:
	int borrownum, returnnum;//ÿ�½�������������
	vector<Book> bookdata;//ͼ������
	vector<Student> studata;//ѧ������
	vector<int> betoli;//Ԥ���鵽��
public:
	Library();//ʵ�ֱַ��book.txt��student.txt��������
	void SaveBook();//���鵽�ļ�
	void SaveStudent();//��ѧ�����ļ�
	void SearchBookname(string bookname);//����������
	void SearchBookauthor(string theauthor);//������������
	int SearchBookAB(char* bookname, char* theauthor);//�����ߺ�����һ�����
	int SearchBookid(int id);//������������ѯ
	int getid();//����Ŀǰ��������
	virtual void printbook(Book a);//��ӡһ��ͼ���������Ϣ
	virtual void ShowAllBook()=0; //���ϵͳ����ͼ��
	void SortBook();//ͼ������
	void SortStudent();//ѧ������
	void printStu();//���ѧ������Ϣ,host��guest��������������������黯
	int GetStu();//���ض�������
	~Library();
};

#endif LIBRARY_H