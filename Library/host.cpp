#include "host.h"
#include<iostream>
using namespace std;
#include<iomanip>
#include<fstream>

host::host()
{
	/*读入book.dat里的内容到bookdata*/
	Book item;
	ifstream file("book.dat", ios::binary);
	if (file.fail())
	{
		cout << "Fail to open book.dat!" << endl;
		system("pause");
		exit(0);
	}
	while (file.read((char*)&item, sizeof(item)))
	{
		cout << item.id << item.name;
		bookdata.push_back(item);
		//printbook(bookdata[0]);
	}
	file.close();
}

void host::AddBook(Book newbook)
{
	bookdata.push_back(newbook);
}

void host::AddBooknum(string name, string author, int num)
{
	int k;//该书在bookdata的位置
	for (int i = 0; i < (int)bookdata.size(); i++)
	{
		if (bookdata[i].author == author && bookdata[i].name == name)
		{
			k = i;
		}
	}
	bookdata[k].sum += num;
	bookdata[k].noenum += num;
}

void host::DeleteBook(string bookname, string author)
{
}

void host::printbook(Book a)
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

void host::ShowAllBook()
{
}


host::~host()
{
}
