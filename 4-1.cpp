#include "main.h"


/*
	//버블 정렬 : 인접한 데이터의 크기를 비교해 정렬하는 방법 
*/



/*
	//수 정렬하기 (2750번)


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	vector<int>num(n, 0);

	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
	}

	for (int i = 0; i < n-1; i++)
	{
		for (int k = 0; k < n-1-i; k++)
		{
			if (num[k] > num[k + 1])
			{
				int temp = num[k];
				num[k] = num[k + 1];
				num[k + 1] = temp;
			}
		}
	}
	for (int tot : num)
		cout << tot << "\n";

	return 0;
}*/



/*
	//버블 정렬 프로그램 1 (백준 1377번)


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	int n;
	cin >> n;
	vector < pair<int, int>>A(n);

	for (int i = 0; i < n; i++)
	{
		cin >> A[i].first;
		A[i].second = i;
	}

	sort(A.begin(), A.end());
	int max = 0;

	for (int i= 0; i < n; i++)
	{
		if (max < A[i].second - 1)
	 		max = A[i].second - 1;
	}
	cout << max + 1;
}*/