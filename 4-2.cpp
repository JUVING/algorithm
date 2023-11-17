#include "main.h"



/*
	//선택 정렬 : 최대나 최소 데이터를 나열된 순으로 찾아가며 선택하는 방법
	//시간 복잡도 : N^2
*/



/*
	//내림차순으로 자릿수 정렬하기 (백준 1427번)


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str;
	cin >> str;

	vector<int>num(str.size(),0);

	for (int i = 0; i < str.size(); i++)
	{
		num[i] = stoi(str.substr(i, 1));
	}

	for (int i = 0; i < str.length(); i++)
	{
		int max=i;
		for (int k = i + 1; k < str.length(); k++)
		{
			if (num[k] > num[max])
			{ 
				max = k;
			}
		}
		if (num[i] < num[max])
		{
			int temp = num[i];
			num[i] = num[max];
			num[max] = temp;
		}
	}
	
	for (int tot : num)
		cout << tot;

	return 0;
}*/