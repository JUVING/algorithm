#include "main.h"

/*
	구간 합
	합 배열 정의 : s[5] = s[0] + s[1] + s[2] + s[3] + s[4] + s[5]
	
	구간 합을 구하는 공식 : s[j] - s[i-1] 
*/


/*
//구간 합 구하기 1 (백준 11659번)

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b;
	cin >> a >> b;
	int num[100001] = { };
	
	for (int i = 1; i <= a; i++)
	{
		int temp;
		cin >> temp;
		num[i] = num[i - 1] + temp;
	}

	for (int k = 0; k < b; k++)
	{
		int n, m;
		cin >> n >> m;
		cout << num[m] - num[n-1] << "\n";
	}

	return 0;
}*/


/*
//구간 합 구하기2 (11660번)

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N,M;
	cin >> N >> M;
	vector<vector<int>>A(N + 1, vector<int>(N + 1, 0));
	vector<vector<int>>D(N + 1, vector<int>(N + 1, 0));

	for (int i = 1; i <= N; i++)
	{
		for (int k = 1; k <= N; k++)
		{
			cin >> A[i][k];

			D[i][k] = D[i][k - 1] + D[i - 1][k] - D[i - 1][k - 1] + A[i][k];
		}
	}
	for (int i = 0; i < M; i++)
	{
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;

		int result = D[x2][y2] - D[x1 - 1][y2] - D[x2][y1 - 1] + D[x1 - 1][y1 - 1];
		cout << result << "\n";
	}

	return 0;
}*/


/*
	나뭐지 합 구하기(백준 10986번)

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;
	vector<long>S(N, 0);
	vector<long>C(M, 0);
	long answer = 0;
	cin >> S[0];

	for (int i = 1; i < N; i++)
	{
		int temp = 0;
		cin >> temp;
		S[i] = S[i - 1] + temp;
	}
	for (int i = 0; i < N; i++)
	{
		int remainder = S[i] % M;

		if (remainder == 0)
			answer++;

		C[remainder]++;
	}
	for (int i = 0; i < M; i++)
	{
		if (C[i] > 1)
		{
			answer = answer + (C[i] * (C[i] - 1) / 2);
		}
	}
	cout << answer << "\n";

	return 0;
}*/