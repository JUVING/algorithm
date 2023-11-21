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



/*
	//DFS와 BFS 프로그램 (백준 1260번)

static vector<vector<int>>A;
static vector<bool>visited;
static bool arrive;
void DFS(int node);
void BFS(int node);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, start;
	arrive = false;
	cin >> n >> m >> start;
	A.resize(n + 1);

	for (int i = 0; i < m; i++)
	{
		int s, e;
		cin >> s >> e;
		A[s].push_back(e);
		A[e].push_back(s);
	}

	for (int i = 1; i <= n; i++)
	{
		sort(A[i].begin(), A[i].end());
	}

	visited = vector<bool>(n + 1, false);

	DFS(start);
	cout << "\n";
	fill(visited.begin(), visited.end(), false);
	BFS(start);
	cout << "\n";
}
void DFS(int node)
{
	cout << node << " ";
	visited[node] = true;

	for (int i : A[node])
	{
		if (!visited[i])
			DFS(i);
	}
}
void BFS(int node)
{
	queue<int>myqueue;
	myqueue.push(node);
	visited[node] = true;

	while (!myqueue.empty())
	{
		int now_node = myqueue.front();
		myqueue.pop();
		cout << now_node << " ";
		for (int i : A[now_node])
		{
			if (!visited[i])
			{
				visited[i] = true;
				myqueue.push(i);
			}
		}
	}
}*/




/*
	//미로 탐색하기 (백준 2178번)
*/

static int dx[] = { 0,1,0,-1 };
static int dy[] = { 1,0,-1,0 };
static int A[101][101];
static bool visited[101][101] = { false };
static int n, m;
void BFS(int i, int j);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		string s;
		for (int j = 0; j < m; j++)
		{
			A[i][j] = s[j] - '0';
		}
	}
	BFS(0, 0);
	cout << A[n - 1][m - 1] << "\n";
}
void BFS(int i, int j)
{
	queue < pair<int, int>>myqueue;
	myqueue.push(make_pair(i, j));

	while (!myqueue.empty())
	{
		int now[2];
		now[0] = myqueue.front().first;
		now[1] = myqueue.front().second;
		myqueue.pop();
		visited[i][j] = true;

		for (int k = 0; k < 4; k++)
		{
			int x = now[0] + dx[k];
			int y = now[1] + dy[k];

			if (x >= 0 && y >= 0 && x < n && y < m)
			{
				if (A[x][y] != 0 && !visited[x][y])
				{
					visited[x][y] = true;
					A[x][y] = A[now[0]][now[1]] + 1;
					myqueue.push(make_pair(x, y));
				}
			}
		}
	}
}