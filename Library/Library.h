/*实现功能功能：*/
/*1.对图书信息进行添加、修改、删除、分类、查询、更新、统计、输出、排名等操作，实现对图书的管理*/
/**(1).更新包括更新添加、修改、删除的信息**/
#ifndef LIBRARY_H
#define	LIBRARY_H
#include"stu_book.h"
#include<vector>
class Library
{
protected:
	int borrownum, returnnum;//每月借书量，还书量
	vector<Book> bookdata;//图书数据
	vector<Student> studata;//学生数据
	vector<int> betoli;//预定书到馆
public:
	Library();//实现分别从book.txt、student.txt读入数据
	void SaveBook();//存书到文件
	void SaveStudent();//存学生到文件
	void SearchBookname(string bookname);//按书名查找
	void SearchBookauthor(string theauthor);//按作者名查找
	int SearchBookAB(char* bookname, char* theauthor);//按作者和书名一起查找
	int SearchBookid(int id);//按检索号数查询
	int getid();//返回目前最大检索号
	virtual void printbook(Book a);//打印一本图书的所有信息
	virtual void ShowAllBook()=0; //输出系统所有图书
	void SortBook();//图书排序
	void SortStudent();//学生排序
	void printStu();//输出学生的信息,host和guest都是用这个函数，不用虚化
	int GetStu();//返回读者总数
	~Library();
};

#endif LIBRARY_H