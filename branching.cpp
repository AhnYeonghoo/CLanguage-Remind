#include <iostream>

using namespace std;

int mainBrancing()
{

	int number;

	cin >> number;
	
	if (number % 2 == 0)
		cout << "짝수입니다.\n";
	else
		cout << "홀수입니다.\n";

	// 조건 연산자 (삼항 연산자)
	cout << (number % 2 == 0 ? "짝수입니다." : "홀수입니다.");

	// switch - case

	switch (number)
	{
	case 0:
		cout << "정수 0 입니다." << endl;
		break;
	case 1:
		cout << "정수 1 입니다." << endl;
		break;
	default:
		cout << "Another Number" << endl;
		break;
	}

	return 0;

}