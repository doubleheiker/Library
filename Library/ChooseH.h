#include<iostream>
using namespace std;
#include<cctype>
#include "host.h"
#include<cstring>

void chooseH(int x, host &m)
{
	char c;
	int choice;
	switch (x)
	{
	case 1:
	{
		break;
	}
	case 2:
	{
		break;
	}
	case 3://新增图书信息
	{
		Book temp;//临时图书结构体
		int num,t;//新增该数数量
		cout << "   请输入书名(输完后按回车结束): ";
		cin.ignore();
		cin.getline(temp.name, 20);
		cout << endl;
		cout << "   请输入作者(输完后按回车结束): ";
		cin.getline(temp.author, 20);
		cout << endl;
		t = m.SearchBookAB(temp.name, temp.author);//
		cout << t;
		if (m.SearchBookAB(temp.name, temp.author) != -1)//已有该书
		{
			char cho;
			cout << "   这是书库已有书籍，是否为新增库存?(Y/N): ";
			cin >> cho;
			cout << endl;
			if (tolower(cho) == 'y')
			{
				cout << "   请输入新增数量: ";
				cin >> num;
				//如果nonum为0,修改是否可借函数和预约函数
				m.AddBooknum(temp.name, temp.author, num);//增加该书库存
				m.SaveBook();
				cout << endl << "   操作成功!" << endl;
			}
			else if(tolower(cho) == 'n')
			{
				cout << "   已取消此次操作!" << endl;
			}
			else
			{
				cout << "   无效操作!" << endl;
			}
		}
		else//新书
		{
			//int idnum;
			cout << "   请输入此次新增该书的数量(输完后按回车结束): ";
			cin >> num;
			cout << endl;
			cout << "   请输入该书的价格(输完后按回车结束): ";
			cin >> temp.price;
			cout << endl;
			cout << "   请输入该书的种类(输完后按回车结束): ";
			cin.ignore();
			cin.getline(temp.kind,20);
			cout << endl;
			cout << "   请输入馆藏地址(输完后按回车结束): ";
			cin >> temp.room;
			cout << endl;
			temp.id = m.getid() + 1;
			temp.sum = temp.noenum = num;
			temp.borrowCount = 0;
			temp.right = true;
			temp.appointment = 0;
			strcpy_s(temp.borrowdate, 30, "0000.00.00");
			strcpy_s(temp.returndate, 30, "0000.00.00");
			//temp.borrowdate = "0000.00.00";
			//temp.returndate = "0000.00.00";
			m.AddBook(temp);
			m.SaveBook();
			cout << "   信息存储成功!" << endl;
		}
		cout << "   你还需要其他操作吗?(Y/N): ";
		cin >> c;
		if (tolower(c) == 'y')
		{
			cout << " __________________________________________________________" << endl;
			cout << "|                                                          |" << endl;
			cout << "                  图书馆管理系统(管理员版)                    " << endl;
			cout << endl;
			cout << "  选择你所需操作:" << endl;
			cout << "                1. 书库所有图书目录" << endl;
			cout << "                2. 查询图书信息" << endl;
			cout << "                3. 新增图书信息" << endl;
			cout << "                4. 修改图书信息" << endl;
			cout << "                5. 删除图书信息" << endl;
			cout << "                6. 借阅图书" << endl;
			cout << "                7. 归还图书" << endl;
			cout << "                8. 本月借还统计" << endl;
			cout << "                9. 预约书到馆情况" << endl;
			cout << "                10.退出" << endl;
			cout << endl;
			cout << "  (输入选项前的序号)" << endl;
			cout << "|__________________________________________________________|" << endl;
			cout << "  : ";
			cin >> choice;
			system("cls");
			judgechioceH(choice);
			chooseH(choice, m);
		}
		else 
		{
			cout << "欢迎再次使用本系统!再见!" << endl;
			system("pause");
			exit(0); 
		}
	}
	case 4:
	{
		break;
	}
	case 5:
	{
		break;
	}
	case 6:
	{
		break;
	}
	case 7:
	{
		break;
	}
	case 8:
	{
		break;
	}
	case 9:
	{
		cout << "   你还需要其他操作吗?(Y/N): ";
		cin >> c;
		if (tolower(c) == 'y')
		{
			cout << " __________________________________________________________" << endl;
			cout << "|                                                          |" << endl;
			cout << "                  图书馆管理系统(管理员版)                    " << endl;
			cout << endl;
			cout << "  选择你所需操作:" << endl;
			cout << "                1. 书库所有图书目录" << endl;
			cout << "                2. 查询图书信息" << endl;
			cout << "                3. 新增图书信息" << endl;
			cout << "                4. 修改图书信息" << endl;
			cout << "                5. 删除图书信息" << endl;
			cout << "                6. 借阅图书" << endl;
			cout << "                7. 归还图书" << endl;
			cout << "                8. 本月借还统计" << endl;
			cout << "                9. 预约书到馆情况" << endl;
			cout << "                10.退出" << endl;
			cout << endl;
			cout << "  (输入选项前的序号)" << endl;
			cout << "|__________________________________________________________|" << endl;
			cout << "  : ";
			cin >> choice;
			system("cls");
			judgechioceH(choice);
			chooseH(choice,m);
		}
		else exit(0);
	}
	case 10:
	{
		cout << "欢迎再次使用本系统!再见!" << endl;
		system("pause");
		exit(0);
	}
	}
}