#include "main.h"

/*
//���� ����
int main()
{
	//����
	vector<int> A;

	//���� ����
	A.push_back(1); //�������� 1 �߰�
	A.insert(A.begin(), 7); //�� �տ� 7�� ����
	A.insert(A.begin() + 2, 10); //index 2�� ��ġ�� 10 ����

	//�� ����
	A[4] = -5; //index 4�� ���� -5�� ����

	//���� ����
	A.pop_back(); //������ �� ����
	A.erase(A.begin() + 3); //index 3�� �ش��ϴ°� ����
	A.clear(); //��� �� ����

	//���� ��������
	A.size(); //������ ����
	A.front(); //ó�� ��
	A.back(); //������ ��
	A[3]; //index 3�� �ش��ϴ� ��
	A.at(5); //index 5�� �ش��ϴ� ��
	A.begin(); //ù ��° ������ ��ġ
	A.end(); //������ ������ ��ġ
}*/


/*
//������ �� ���ϱ�(36) ����(11720)
int main()
{
	int a=0;
	cout << ">>> ";
	cin >> a;

	cin.ignore();

	string num;
	cout << ">>> ";
	getline(cin, num);

	int add = 0;

	for (int i = 0; i < a; i++)
	{
		add += num[i] -'0';
	}
	cout << ">>> " << add;
}*/


//��� ���ϱ�(39) ����(1546)
int main()
{
	int a = 0;
	cout << ">>> ";
	cin >> a;
	
	int num[1000];
	cout << ">>> ";
	for (int i = 0; i < a; i++)
	{
		cin >> num[i];
	}

	long maxVal = 0;
	long result = 0;
	for (int k = 0; k < a; k++)
	{
		if (maxVal < num[k])
			maxVal = num[k];

		result += num[k];
	}
	cout <<">>> "<< result * 100 / maxVal / a;
}

