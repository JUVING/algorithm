#include "main.h"


/*
	//기수 정렬 : 값을 비교하지 않고 값을 놓고 비교할 자릿수(1의 자리, 10의자리)를 정한다음 해당 자릿수만 비교한다.


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	int count[10001] = { 0 };
	int number = 0;

	for (int i = 1; i <= n; i++)
	{
		cin >> number;
		count[number]++; //입력 받은 값의 위치 인덱스의 값을 1로 만든다.
	}					 //0과 1로 나누어 입력 받은 데이터 표시
	for (int i = 0; i <= 10000; i++)
	{
		if (count[i] != 0) //값이 0이 아니면 
		{
			for (int j = 0; j < count[i]; j++)
				cout << i << "\n";
		}
	}
}*/