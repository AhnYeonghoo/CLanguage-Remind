#include <iostream>

using namespace std;

int mainConsoleIO()
{
	// cin�� �����͸� ����־� ������ ��Ʈ���̰�
	// �� �����͸� �ؼ��ϴ� ���� �ڷ���
	// �ڷ����� ���� �˾Ƽ� ó�����ֱ� ������ scanf()���� ��

	char userInput[100];

	// cin�� getline�� ����
	cout << "���ϴ� ������ �Է����ּ���." << endl;
	cout << "�Է�: ";

	//cin >> userInput; // ��ĭ������ �ν���
	
	// cin.getline(userInput, sizeof(userInput)); -> ���ͱ��� �Է¹���

	//cout << "�޾Ƹ�: " << userInput << endl;
	
	int number = -1;
	int number2 = -1;
	cin >> userInput;
	cin.ignore(100, '\n'); // �ִ� 100���ڱ��� �Է� �޾Ƽ� �����ϰڴ�.
	
	cin >> number;
	cin >> number2;
	
	cout << userInput << " " << number << " " << number2 << endl;

	// ����: cin.ignore(numeric_limits<streamsize>::max(), '\n')

	return 0;
}