/*completed*/
#include<iostream>
using namespace std;
#include<string>

int JudgePassword()
{
	string s;
	int count = 0;
	char password[] = "890424";
	cout << "����������: ";
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
			cout << "��������㻹��"<< 5-count+1 <<"�λ��ᣬ����������: ";
			cin >> s;
		}
	}

	cout << "������󣬳�����̽��رգ���������������������ȷ�������ѡ��ѧ����¼��" << endl;
	system("pause");
	exit(0);
}