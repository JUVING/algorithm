#include "main.h"


/*
	//슬라이딩 윈도우 : 2개의 포인터로 범위를 지정한 다음범위를 유지한 채로 이동하며 문제를 해결합니다.
*/


/*
	//DNA 비밀번호 (백준 12891번)


int checkarr[4];
int myarr[4];
int checksecret = 0;
void add(char c);
void remove(char c);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int s, p;
	cin >> s >> p;
	int result = 0;
	string a;
	cin >> a;

	for (int i = 0; i < 4; i++)
	{
		cin >> checkarr[i];
		if (checkarr[i] == 0)
			checksecret++;
	}
	for (int i = 0; i < p; i++)
	{
		add(a[i]);
	}
	if (checksecret == 4)
	{
		result++;
	}

	for (int i = p; i < s; i++)
	{
		int j = i - p;
		add(a[i]);
		remove(a[j]);

		if (checksecret == 4)
		{
			result++;
		}
	}
	cout << result << "\n";
}
void add(char c)
{
	switch (c)
	{
	case 'A':
		myarr[0]++;
		if (myarr[0] == checkarr[0])
			checksecret++;
		break;
	case 'C':
		myarr[1]++;
		if (myarr[1] == checkarr[1])
			checksecret++;
		break;
	case 'G':
		myarr[2]++;
		if (myarr[2] == checkarr[2])
			checksecret++;
	case 'T':
		myarr[3]++;
		if (myarr[3] == checkarr[3])
			checksecret++;
		break;
		
	}
}
void remove(char c)
{
	switch (c)
	{
	case 'A':
		myarr[0]--;
		if (myarr[0] == checkarr[0])
			checksecret--;
		break;
	case 'C':
		myarr[1]--;
		if (myarr[1] == checkarr[1])
			checksecret--;
		break;
	case 'G':
		myarr[2]--;
		if (myarr[2] == checkarr[2])
			checksecret--;
	case 'T':
		myarr[3]--;
		if (myarr[3] == checkarr[3])
			checksecret--;
		break;

	}
}*/



/*
	//최솟값 찾기1 (백준 11003번)


typedef pair<int, int>Node;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, l;
	deque<Node> mydeque;

	for (int i = 0; i < n; i++)
	{
		int now;
		cin >> now;

		while (mydeque.size() && mydeque.back().first > now)
		{
			mydeque.pop_back();
		}
		mydeque.push_back(Node(now, i));

		if (mydeque.front().second <= i - l)
		{
			mydeque.pop_front();
		}
		cout << mydeque.front().first << ' ';
	}
}*/