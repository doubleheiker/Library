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
			cout << "������1��2!\n";
			cout << " __________________________________________________________" << endl;
			cout << "|                                                          |" << endl;
			cout << "                    ��ӭʹ��ͼ��ݹ���ϵͳ                    " << endl;
			cout << endl;
			cout << "  ��ѡ�����¼�����ͣ�" << endl;
			cout << "                    1.ѧ��" << endl;
			cout << "                    2.����Ա" << endl;
			cout << endl;
			cout << "  (����ѡ��ǰ�����): ";
			cout << endl;
			cout << "|__________________________________________________________|" << endl << endl;
			cout << "  ������ѡ��ǰ����ţ�" << endl;
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