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
			cout << "���������1~10!\n";
			cout << " __________________________________________________________" << endl;
			cout << "|                                                          |" << endl;
			cout << "                  ͼ��ݹ���ϵͳ(����Ա��)                    " << endl;
			cout << endl;
			cout << "  ѡ�����������:" << endl;
			cout << "                1. �������ͼ��Ŀ¼" << endl;
			cout << "                2. ��ѯͼ����Ϣ" << endl;
			cout << "                3. ����ͼ����Ϣ" << endl;
			cout << "                4. �޸�ͼ����Ϣ" << endl;
			cout << "                5. ɾ��ͼ����Ϣ" << endl;
			cout << "                6. ����ͼ��" << endl;
			cout << "                7. �黹ͼ��" << endl;
			cout << "                8. ���½軹ͳ��" << endl;
			cout << "                9. ԤԼ�鵽�����" << endl;
			cout << "                10.�˳�" << endl;
			cout << endl;
			cout << "  (����ѡ��ǰ�����)" << endl;
			cout << "|__________________________________________________________|" << endl;
			cout << "  : ";
			cin.clear();
			cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
			cin >> a;
		}
		else break;
	}
}