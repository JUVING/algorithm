#include "main.h"

/*
	//스택과 큐 :  
*/


/*
	//스택으로 수열 만들기 (백준 1874번)


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
}*/



/*
	//오큰수 구하기 (백준 17298번)


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	vector<int>num(n, 0);
	vector<int>tot(n, 0);

	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
	}

	stack<int>mystack;
	mystack.push(0);

	for (int i = 1; i < n; i++)
	{
		while (!mystack.empty() && num[mystack.top()] < num[i])
		{
			tot[mystack.top()] = num[i];
			mystack.pop();
		}
		mystack.push(i);
	}
	while (!mystack.empty())
	{
		tot[mystack.top()] = -1;
		mystack.pop();
	}
	for (int i = 0; i < n; i++)
	{
		cout << tot[i] << " ";
	}
}*/



/*
	//카드 게임(백준 2164번)


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	queue<int>myque;

	for (int i = 1; i <= n; i++)
	{
		myque.push(i);
	}
	while (myque.size() > 1)
	{
		myque.pop();
		myque.push(myque.front());
		myque.pop();
	}
	cout << myque.front();
}*/



/*
	//절댓값 힙 구현하기 (백준 11286번)


struct compare
{
	bool operator()(int o1, int o2)
	{
		int first_abs = abs(o1);
		int second_abs = abs(o2);
		if (first_abs == second_abs)
			return o1 > o2;
		else
			return first_abs > second_abs;
	}
};
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	priority_queue<int, vector<int>, compare>myqueue;

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int request;
		cin >> request;

		if (request == 0)
		{
			if (myqueue.empty())
			{
				cout << "0\n";
			}
			else
			{
				cout << myqueue.top() << '\n';
				myqueue.pop();
			}
		}
		else
		{
			myqueue.push(request);
		}
	}
}*/

