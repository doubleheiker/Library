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
	case 3://����ͼ����Ϣ
	{
		Book temp;//��ʱͼ��ṹ��
		int num,t;//������������
		cout << "   ����������(����󰴻س�����): ";
		cin.ignore();
		cin.getline(temp.name, 20);
		cout << endl;
		cout << "   ����������(����󰴻س�����): ";
		cin.getline(temp.author, 20);
		cout << endl;
		t = m.SearchBookAB(temp.name, temp.author);//
		cout << t;
		if (m.SearchBookAB(temp.name, temp.author) != -1)//���и���
		{
			char cho;
			cout << "   ������������鼮���Ƿ�Ϊ�������?(Y/N): ";
			cin >> cho;
			cout << endl;
			if (tolower(cho) == 'y')
			{
				cout << "   ��������������: ";
				cin >> num;
				//���nonumΪ0,�޸��Ƿ�ɽ躯����ԤԼ����
				m.AddBooknum(temp.name, temp.author, num);//���Ӹ�����
				m.SaveBook();
				cout << endl << "   �����ɹ�!" << endl;
			}
			else if(tolower(cho) == 'n')
			{
				cout << "   ��ȡ���˴β���!" << endl;
			}
			else
			{
				cout << "   ��Ч����!" << endl;
			}
		}
		else//����
		{
			//int idnum;
			cout << "   ������˴��������������(����󰴻س�����): ";
			cin >> num;
			cout << endl;
			cout << "   ���������ļ۸�(����󰴻س�����): ";
			cin >> temp.price;
			cout << endl;
			cout << "   ��������������(����󰴻س�����): ";
			cin.ignore();
			cin.getline(temp.kind,20);
			cout << endl;
			cout << "   ������ݲص�ַ(����󰴻س�����): ";
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
			cout << "   ��Ϣ�洢�ɹ�!" << endl;
		}
		cout << "   �㻹��Ҫ����������?(Y/N): ";
		cin >> c;
		if (tolower(c) == 'y')
		{
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
			cin >> choice;
			system("cls");
			judgechioceH(choice);
			chooseH(choice, m);
		}
		else 
		{
			cout << "��ӭ�ٴ�ʹ�ñ�ϵͳ!�ټ�!" << endl;
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
		cout << "   �㻹��Ҫ����������?(Y/N): ";
		cin >> c;
		if (tolower(c) == 'y')
		{
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
			cin >> choice;
			system("cls");
			judgechioceH(choice);
			chooseH(choice,m);
		}
		else exit(0);
	}
	case 10:
	{
		cout << "��ӭ�ٴ�ʹ�ñ�ϵͳ!�ټ�!" << endl;
		system("pause");
		exit(0);
	}
	}
}