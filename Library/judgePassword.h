/*completed*/
#include<iostream>
using namespace std;
#include<string>

int JudgePassword()
{
	string s;
	int count = 0;
	char password[] = "890424";
	cout << "请输入密码: ";
	cin >> s;
	while (count<5)
	{
		++count;
		if (s==password)
		{
			return 1;
		}
		else 
		{
			cout << "密码错误！你还有"<< 5-count+1 <<"次机会，请重新输入: ";
			cin >> s;
		}
	}

	cout << "密码错误，程序进程将关闭，请您重新启动后输入正确密码或者选择学生登录。" << endl;
	system("pause");
	exit(0);
}