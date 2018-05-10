/*completed*/
#include<iostream>
using namespace std;

void judgeStart(int &a)
{
	while (1)
	{
		cin >> a;
		system("cls");
		if (cin.fail() || (a != 1 && a != 2))
		{
			cout << "请输入1或2!\n";
			cout << " __________________________________________________________" << endl;
			cout << "|                                                          |" << endl;
			cout << "                    欢迎使用图书馆管理系统                    " << endl;
			cout << endl;
			cout << "  请选择你登录的类型：" << endl;
			cout << "                    1.学生" << endl;
			cout << "                    2.管理员" << endl;
			cout << endl;
			cout << "  (输入选项前的序号): ";
			cout << endl;
			cout << "|__________________________________________________________|" << endl << endl;
			cout << "  请输入选项前的序号！" << endl;
			cout << " : ";
			cin.clear();
			//cin.sync();
			cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
			
		}
		else
		{
			//cout << a;
			break;
		}
	}
}