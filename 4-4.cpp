#include "main.h"

/*
	//퀵 정렬 : 기준 값을 선정해 해당 값보다 작은 데이터와 큰 데이터로 분류
*/


/*
	//K번째 수 구하기


void quitSort(vector<int>& A, int s, int e, int k);
int partition(vector<int>& A, int s, int e);
void swap(vector<int>& A, int i, int j);

int main()
{
	int n,k;
	cin >> n >> k;
	vector<int>A(n, 0);

	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}
	quitSort(A,0,n-1,k-1);
	cout << A[k - 1];
}
void quitSort(vector<int>& A, int s, int e, int k)
{
	int pivot = partition(A, s, e);
	if (pivot == k)
	{
		return;
	}
	else if (k < pivot)
	{
		quitSort(A, s, pivot - 1, k);
	}
	else
	{
		quitSort(A, pivot + 1, e, k);
	}
}
int partition(vector<int>& A, int s, int e)
{
	if (s + 1 == e)
	{
		if (A[s] > A[e])
		{
			swap(A, s, e);
		}
		return e;
	}
	int m = (s + e) / 2;
	swap(A, s, m);
	int pivot = A[s];
	int i = s + 1, j = e;

	while (i <= j)
	{
		while (pivot < A[j] && j>0)
		{
			j--;
		}
		while (pivot > A[i] && i < A.size() - 1)
		{
			i++;
		}
		if (i <= j)
		{
			swap(A, i++, j--);
		}
	}
	A[s] = A[j];
	A[j] = pivot;
	return j;
}
void swap(vector<int>& A, int i, int j)
{
	int temp=A[i];
	A[i] = A[j];
	A[j] = temp;
}*/