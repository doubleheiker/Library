#include<iostream>
using namespace std;
#include<iomanip>
#include "host.h"
#include "guest.h"
#include "judgestart.h"
#include "judgePassword.h"
#include "judgeChoiceH.h"
#include "ChooseH.h"

int main()
{
	cout.setf(ios::left);
	host manager;
	//guest stu;
	cout << " __________________________________________________________" << endl;
	cout << "|                                                          |" << endl;
	cout << "                    欢迎使用图书馆管理系统                    " << endl;
	cout << endl;
	cout << "  请选择你登录的类型: " << endl;
	cout << "                    1.学生" << endl;
	cout << "                    2.管理员" << endl;
	cout << endl;
	cout << "  (输入选项前的序号)";
	cout << endl;
	cout << "|__________________________________________________________|" << endl;
	cout << " : ";
	int start,choiceH,choiceS;
	/*start是对用户类型(学生、管理员)选择,chioceH是管理员的选择,choiceS是学生的选择*/
	judgeStart(start);/*检验start是否是1或2*/
	switch (start)
	{
	case 1:
	{
		break;
	}
	case 2:
	{
		JudgePassword();//密码口令检验
		system("cls");
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
		cin >> choiceH;
		judgechioceH(choiceH);
		chooseH(choiceH,manager);
		break;
	}
	}



	system("pause");
	return 0;
}