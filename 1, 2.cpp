#include "main.h"


/*
	//�ð� ���⵵ 
	//��-���ް�(�ּ�), ��-��Ÿ(����), ��-��(�־�)

int main()
{
	int findnumber;
	srand(time(NULL));
	findnumber = rand() % 100; //0~99������ �� ������ ����

	for (int i = 0; i < 100; i++)
	{
		if (i == findnumber)
		{
			cout << i;
			break;
		}
	}
}*/



/*
	//����� Ȱ�� ���

int main()
{
	int testcase;
	cin >> testcase;

	int answer = 0;
	int A[100001] = { 0 };

	for (int i = 1; i < 10001; i++)
	{
		A[i] = rand() * 100;
	}

	for (int t = 1; t < testcase+1; t++)
	{
		int start, end;
		cin >> start >> end;
		for (int i = start; i <= end; i++)
		{
			answer += A[i];
		}
		cout << testcase << " " << answer;
	}
}*/

/*
int main()
{
	int n;
	string str;

	cin >> n;
	vector<int>num(n);
	cin >> str;
	

	for (int i = 0; i < n; i++)
	{
		num[i] = str[i] - '0';
	}

	int total = 0;
	for (int tot : num)
		total += tot;

	cout << total << endl;

	return 0;
}*/