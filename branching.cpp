#include <iostream>

using namespace std;

int mainBrancing()
{

	int number;

	cin >> number;
	
	if (number % 2 == 0)
		cout << "¦���Դϴ�.\n";
	else
		cout << "Ȧ���Դϴ�.\n";

	// ���� ������ (���� ������)
	cout << (number % 2 == 0 ? "¦���Դϴ�." : "Ȧ���Դϴ�.");

	// switch - case

	switch (number)
	{
	case 0:
		cout << "���� 0 �Դϴ�." << endl;
		break;
	case 1:
		cout << "���� 1 �Դϴ�." << endl;
		break;
	default:
		cout << "Another Number" << endl;
		break;
	}

	return 0;

}