#pragma once
#include "Library.h"
#include<string>

class host :
	public Library
{
public:
	host();
	void AddBook(Book newbook);//新增图书
	void AddBooknum(string name, string author, int num);//增加已有图书数量
	void DeleteBook(string bookname, string author);//删除图书，可改动，只输入书名即可
	void printbook(Book a);//打印一本书的全部信息
	void ShowAllBook();//打印所有图书的所有信息
	~host();
};

