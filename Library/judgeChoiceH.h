/*completed*/
#include<iostream>
using namespace std;

void judgechioceH(int &a)
{
	while (1)
	{
		system("cls");
		if (cin.fail() || (a < 1 || a > 10))
		{
			cout << "请输入序号1~10!\n";
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
			cin.clear();
			cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
			cin >> a;
		}
		else break;
	}
}