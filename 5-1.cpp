#include "main.h"

/*
	//깊이 우선 탐색(DFS) : 그래프 완전 탐색 기법 중 하나로 시작 노드에서 출발하여 분기를 정하여 최대 깊이까지
	//                      탐색을 마친 후 다른 쪽 분기로 이동
*/


/*
	//연결 요소의 개수 구하기 (백준 11724번)


static vector<vector<int>>A;
static vector<bool>visited;
void DFS(int v);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;
	A.resize(n+1); //벡터의 크기 변경에 쓰인다.
	visited = vector<bool>(n + 1, false);

	for (int i = 0; i < m; i++)
	{
		int s, e;
		cin >> s >> e;
		A[s].push_back(e);
		A[e].push_back(s);
	}

	int count = 0;

	for (int i = 1; i < n + 1; i++)
	{
		if (!visited[i])
		{
			count++;
			DFS(i);
		}
	}
	cout << count << "\n";
}
void DFS(int v)
{
	if (visited[v])
	{
		return;
	}
	visited[v] = true;

	for(int i : A[v]) //V에 있는 요소를 검색해서 출력한다.
		if (visited[i] == false)
		{
			DFS(i);
		}
}*/



/*
	//신기한 소수 찾기 (백준 2023번)


void DFS(int number, int jarisu);
bool isprime(int num);
static int n;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	DFS(2, 1);
	DFS(3, 1);
	DFS(5, 1);
	DFS(7, 1);
}
void DFS(int number, int jarisu)
{
	if (jarisu == n)
	{
		if (isprime(number))
		{
			cout << number << "\n";
		}
		return;
	}
	for (int i = 1; i < 10; i++)
	{
		if (i % 2 == 0)
		{
			continue;
		}
		if (isprime(number * 10 + i))
		{
			DFS(number * 10 + i, jarisu + 1);
		}
	}
}
bool isprime(int num)
{
	for (int i = 2; i <= num / 2; i++)
	{
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
}*/



/*
	//친구 관계 파악하기 (백준 13023번)


static vector<vector<int>>A;
static vector<bool>visited;
static bool arrive;
void DFS(int now, int depth);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	arrive = false;
	cin >> n >> m;
	A.resize(n);
	visited = vector<bool>(n, false);

	for (int i = 0; i < m; i++)
	{
		int s, e;
		cin >> s >> e;
		A[s].push_back(e);
		A[e].push_back(s);
	}
	for (int i = 0; i < n; i++)
	{
		DFS(i, 1);
		if (arrive)
		{
			break;
		}
	}
	if (arrive)
	{
		cout << 1 << "\n";
	}
	else
	{
		cout << 0 << "\n";
	}
}
void DFS(int now, int depth)
{
	if (depth == 5 || arrive)
	{
		arrive = true;
		return;
	}
	visited[now] = true;

	for (int i : A[now])
	{
		if (!visited[i])
		{
			DFS(i, depth + 1);
		}
	}
	visited[now] = false;
}*/