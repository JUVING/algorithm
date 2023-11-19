#include "main.h"


/*
	//병합 정렬 : 여러 그룹으로 나누어 2개씩 그룹을 합쳐가며 오름 차순으로 정렬
*/


/*
	//수 정렬하기 2 (백준 2751번)


void merge_sort(int s, int e);
static vector<int>A;
static vector<int>tmp;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	A=vector<int>(n+1, 0);
	tmp=vector<int>(n+1, 0);

	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}
	merge_sort(1, n);

	for (int num : A)
		cout << num << '\n';

	return 0;
}
void merge_sort(int s, int e)
{
	if (e - s < 1)
	{
		return;
	}

	int m = s + (e - s) / 2;

	merge_sort(s, m);
	merge_sort(m + 1, e);

	for (int i = s; i <= e; i++)
	{
		tmp[i] = A[i];
	}

	int k = s;
	int index1 = s;
	int index2 = m + 1;

	while (index1 <= m && index2 <= e)
	{
		if (tmp[index1] > tmp[index2])
		{
			A[k] = tmp[index2];
			k++;
			index2++;
		}
		else
		{
			A[k] = tmp[index1];
			k++;
			index1++;
		}
	}

	while (index1 <= m)
	{
		A[k] = tmp[index1];
		k++;
		index1++;
	}
	while (index2 <= e)
	{
		A[k] = tmp[index2];
		k++;
		index2++;
	}
}*/



/*
	//버블 정렬 프로그램 2 (백준 1517번)


void merge_sort(int s, int e);
static vector<int>A;
static vector<int>tmp;
static long result;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	A = vector<int>(n + 1, 0);
	tmp = vector<int>(n + 1, 0);

	for (int i = 1; i <= n; i++)
	{
		cin >> A[i];
	}
	merge_sort(1, n);

	for (int num : A)
		cout << num << '\n';

	cout << result;

	return 0;
}
void merge_sort(int s, int e)
{
	if (e - s < 1)
	{
		return;
	}

	int m = s + (e - s) / 2;

	merge_sort(s, m);
	merge_sort(m + 1, e);

	for (int i = s; i <= e; i++)
	{
		tmp[i] = A[i];
	}

	int k = s;
	int index1 = s;
	int index2 = m + 1;

	while (index1 <= m && index2 <= e)
	{
		if (tmp[index1] > tmp[index2])
		{
			A[k] = tmp[index2];
			result = result + index2 - k; //뒤쪽의 정렬에서 작은 수가 발생하면 횟수를 카운트한다.
			k++;
			index2++;
		}
		else
		{
			A[k] = tmp[index1];
			k++;
			index1++;
		}
	}

	while (index1 <= m)
	{
		A[k] = tmp[index1];
		k++;
		index1++;
	}
	while (index2 <= e)
	{
		A[k] = tmp[index2];
		k++;
		index2++;
	}
}*/