#include "Library.h"
#include<iostream>
using namespace std;
#include<fstream>
#include<iomanip>

Library::Library():borrownum(0),returnnum(0)
{
	//int totalB, totalSTU;
/*	读入book.txt里的内容到bookdata
	ifstream file("book.dat", ios::in | ios::binary);
	if (file.fail())
	{
		cout << "Fail to open book.dat!" << endl;
		system("pause");
		exit(0);
	}
	if (file)
	{
		while (file.eof())
		{
			Book item;
			file.read((char*)&item, sizeof(item));
			bookdata.push_back(item);
			printbook(bookdata[0]);
		}
		file.close();
	}
	//cin.clear();
	//cin.sync();
*/
	/*读入student.txt里的内容到studata*/
	/*ifstream file1("student.dat", ios::in | ios::binary);
	if (file1.fail())
	{
		cout << "Fail to open student.dat!" << endl;
		system("pause");
		exit(0);
	}
	if (file1)
	{
		while (file1.eof())
		{
			Student item;
			file1.read((char*)&item, sizeof(item));
			studata.push_back(item);
		}
		file1.close();
	}*/
}

void Library::SaveBook()//存书到文件
{
	ofstream fout("book.dat", ios::binary);
	if (fout.fail())
	{
		cout << "Fail to open book.dat!" << endl;
		exit(0);
	}
	for (int i = 0; i < (int)bookdata.size(); i++)
	{
		fout.write((char*)&bookdata[i], sizeof(bookdata[i]));
	}
}

void Library::SaveStudent()//存学生到文件
{
	ofstream fout("student.dat", ios::binary);
	/*if (fout.fail())
	{
	cout << "Fail to open student.dat!" << endl;
	exit(0);
	}*/
	if (fout )
	{
		for (int i = 0; i < (int)studata.size(); i++)
		{
			fout.write((char*)&studata[i], sizeof(studata[i]));
		}
	}
}

void Library::SearchBookname(string bookname)
{
}

void Library::SearchBookauthor(string theauthor)
{
}

int Library::SearchBookAB(char* bookname, char* theauthor)
{
	//cout << bookdata[0].id;
	for (int i = 0; i < (int)bookdata.size(); i++)
	{
		if (bookdata[i].author == theauthor && bookdata[i].name == bookname)
		{
			return i;
		}
	}
	return -1;
}

int Library::SearchBookid(int id)
{
	return 0;
}

int Library::getid()
{
	return (int)bookdata.size();
}

void Library::printbook(Book a)
{
	cout << setw(8) << a.id;
	cout << setw(14) << a.name;
	cout << setw(14) << a.author;
	cout << setw(14) << a.price;
	cout << setw(14) << a.kind;
	cout << setw(14) << a.room;
	cout << setw(14) << a.borrowCount;
	cout << setw(14) << a.sum;
	cout << setw(14) << a.noenum;
	cout << setw(14) << a.appointment;
	cout << setw(10) << (a.right == 0 ? "不可借" : "可借");
	cout << setw(14) << a.borrowdate;
	cout << setw(14) << a.returndate << endl;
}

void Library::SortBook()
{
}

void Library::SortStudent()
{
}

Library::~Library()
{
}
