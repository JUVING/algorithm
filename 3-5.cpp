#include "main.h"

/*
	//스택과 큐 : 
*/


/*
	//스택으로 수열 만들기 (백준 1874번)
*/

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	vector<int>A(n, 0);
	vector<char>resultv;

	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}

	stack<int> mystack;
	int num = 1;
	bool result = true;

	for (int i = 0;i < A.size(); i++)
	{
		int su = A[i];

		if (su >= num)
		{
			while (su >= num)
			{
				mystack.push(num++);
				resultv.push_back('+');
			}
			mystack.pop();
			resultv.push_back('-');
		}
		else 
		{
			int n = mystack.top();
			mystack.pop();

			if (n > su)
			{
				cout << "NO";
				result = false;
				break;
			}
			else
			{
				resultv.push_back('-');
			}
		}
	}
	if (result)
	{
		for (int i = 0; i < resultv.size(); i++)
		{
				cout << resultv[i] << '\n';
		}
	}
}