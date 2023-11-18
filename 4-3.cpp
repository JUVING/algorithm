#include "main.h"

/*
	//삽입 정렬 : 새로운 숫자가 삽입되면 정렬된 어레이 안에서 자기의 자리를 찾아가며 정렬
*/


/*
	//ATM인출 시간 계산기


int main()
{
	int n;
	cin >> n;
	vector<int>num(n, 0);
	vector<int>result(n, 0);

	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
	}

	for (int i=1;i<n;i++)
	{
		int insert_point = i;
		int insert_value = num[i];

		for (int j = i-1; j >= 0; j--)
		{
			if (num[j] < num[i])
			{
				insert_point = j + 1;
				break;
			}
			if (j == 0)
			{
				insert_point = 0;
			}
		}
		for (int j = i; j > insert_point; j--)
		{
			num[j] = num[j - 1];
		}
		num[insert_point] = insert_value;
	}
	result[0] = num[0];

	for (int i = 1; i < n; i++)
	{
		result[i] = result[i - 1] + num[i];
	}
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum += result[i];
	}
	cout << sum;

	return 0;
}*/