#include "main.h"

/*
	투 포인터 : 2개의 포인터로 알고리즘의 시간 복잡도를 최적화한다.
*/

/*
//연속된 자연수 합 구하기 (백준 2018번)
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	int count = 1;
	int start = 1;
	int end = 1;
	int sum = 1;

	while (end != n)
	{
		if (sum == n)
		{
			count++;
			end++;
			sum = sum + end;
		}
		else if (sum > n)
		{
			sum = sum - start;
			start++;
		}
		else
		{
			end++;
			sum = sum + end;
		}
	}
	cout << count << "\n";

	return 0;
}*/



/*
	//주몽의 명령 (백준 1940번)


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a,b;
	cin >> a;
	cin >> b;
	vector<int>num(a);

	for (int i = 0; i < a; i++)
	{
		cin >> num[i];
	}

	sort(num.begin(), num.end());

	int start=0, end=a-1,count=0;

	while (start<end)
	{
		if (num[start]+num[end] < b)
		{
			start++;
		}
		else if (num[start] + num[end] > b)
		{
			end--;
		}
		else
		{
			count++;
			start++;
			end--;
		}
	}
	cout << count << "\n";

	return 0;
}*/



/*
	//좋은 수 구하기 (백준 1253번)


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

	sort(num.begin(), num.end());

	int result = 0;

	for (int k = 0; k < n; k++)
	{
		long find = num[k];
		int i = 0, j = n - 1;

		while (i < j)
		{
			if (num[i] + num[j] == find)
			{
				if (i != k && j != k)
				{
					result++;
					break;
				}
				else if (i == k)
				{
					i++;
				}
				else if (j == k)
				{
					j--;
				}
			}
			else if (num[i] + num[j] < find)
			{
				i++;
			}
			else 
			{
				j--;
			}
		}
	}
	cout << result << "\n";

	return 0;
}*/