#include <iostream>

using namespace std;

int mainArrays()
{

	int a = 1;
	int b = 2;
	int c = 3;
	// ...

	// ���� �ڷ����� �����͸� �����ϱ� ���� �޸𸮸� �̸� ��Ƴ���
	int myArray[3]{ 1, 2, 3 }; // �ʱ�ȭ�� ���� {} �ȿ� �� ����
	
	// �ε��� (zero-based)
	cout << myArray[0] << " "
		<< myArray[1] << " "
		<< myArray[2] << endl;

	myArray[1] = 5;

	cout << myArray[0] << " "
		<< myArray[1] << " "
		<< myArray[2] << endl;
	
	// ���ڿ��� �⺻������ ������ �迭
	// ���� �迭�� �������� \n�� �ڵ����� ���Եż� ���� ���� + 1�� ���� �迭 ������
	char name[75] = "Hello, World!"; // ����''�� ���ڿ�"" ����
	cout << name << " " << sizeof(name) << endl;

	name[0] = 'A';
	name[1] = 'B';
	name[2] = 'C';
	cout << endl;
	cout << name << endl; // ABC

	name[2] = '\0'; // \0�� Null Character
	cout << name << endl;

	char name2[] = "Hello, World!";
	cout << name2 << " " << sizeof(name2) << endl;
	
	name2[10] = 'A';
	name2[11] = 'B';
	name2[12] = 'C';

	cout << name2 << endl;
	
	return 0;
}