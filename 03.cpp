#include "main.h"

/*
//벡터 사용법
int main()
{
	//선언
	vector<int> A;

	//삽입 연산
	A.push_back(1); //마지막에 1 추가
	A.insert(A.begin(), 7); //맨 앞에 7을 삽입
	A.insert(A.begin() + 2, 10); //index 2에 위치에 10 삽입

	//값 변경
	A[4] = -5; //index 4의 값을 -5로 변경

	//삭제 연산
	A.pop_back(); //마지막 값 삭제
	A.erase(A.begin() + 3); //index 3에 해당하는값 삭제
	A.clear(); //모든 값 삭제

	//정보 가져오기
	A.size(); //데이터 개수
	A.front(); //처음 값
	A.back(); //마지막 값
	A[3]; //index 3에 해당하는 값
	A.at(5); //index 5에 해당하는 값
	A.begin(); //첫 번째 데이터 위치
	A.end(); //마지막 데이터 위치
}*/


/*
//숫자의 합 구하기(36) 백준(11720)
int main()
{
	int a=0;
	cout << ">>> ";
	cin >> a;

	cin.ignore();

	string num;
	cout << ">>> ";
	getline(cin, num);

	int add = 0;

	for (int i = 0; i < a; i++)
	{
		add += num[i] -'0';
	}
	cout << ">>> " << add;
}*/


//평균 구하기(39) 백준(1546)
int main()
{
	int a = 0;
	cout << ">>> ";
	cin >> a;
	
	int num[1000];
	cout << ">>> ";
	for (int i = 0; i < a; i++)
	{
		cin >> num[i];
	}

	long maxVal = 0;
	long result = 0;
	for (int k = 0; k < a; k++)
	{
		if (maxVal < num[k])
			maxVal = num[k];

		result += num[k];
	}
	cout <<">>> "<< result * 100 / maxVal / a;
}

