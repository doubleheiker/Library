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
	cout << "                    ��ӭʹ��ͼ��ݹ���ϵͳ                    " << endl;
	cout << endl;
	cout << "  ��ѡ�����¼������: " << endl;
	cout << "                    1.ѧ��" << endl;
	cout << "                    2.����Ա" << endl;
	cout << endl;
	cout << "  (����ѡ��ǰ�����)";
	cout << endl;
	cout << "|__________________________________________________________|" << endl;
	cout << " : ";
	int start,choiceH,choiceS;
	/*start�Ƕ��û�����(ѧ��������Ա)ѡ��,chioceH�ǹ���Ա��ѡ��,choiceS��ѧ����ѡ��*/
	judgeStart(start);/*����start�Ƿ���1��2*/
	switch (start)
	{
	case 1:
	{
		break;
	}
	case 2:
	{
		JudgePassword();//����������
		system("cls");
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
		cin >> choiceH;
		judgechioceH(choiceH);
		chooseH(choiceH,manager);
		break;
	}
	}



	system("pause");
	return 0;
}