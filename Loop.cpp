#include <iostream>
using namespace std;

int mainLoop()
{
	// For �⺻ ����
	for (int i{ 0 }; i < 10; i++)
	{
		cout << i << " ";
	}
	cout << endl;

	// �迭 ������ ��� ���� ������ ����
	// ��Ʈ: sizeof(my_array) / sizeof(int)
	int my_array[] = { 1, 2, 3, 4, 5, 4, 3, 2, 1 };

	// for (...)
	{
		// TODO: �ϼ�
		for (const auto& value : my_array)
		{
			cout << value << " ";
		}
		cout << endl;
		
	}

	// ���ڿ� ���
	char my_string[] = "Hello\0, World!";

	// ���ڿ��� �� ���ھ� ����ϱ�
	// cout << my_string << endl; ��� X
	// ��Ʈ: sizeof(), '\0', break;
	
	for (int i = 0; i < sizeof(my_string) / sizeof(char); i++)
	{
		if (my_string[i] == '\0')
		{
			break;
		}
		cout << my_string[i] << " ";
	}
	cout << endl;

	// while �⺻ ����

	int i = 0;
	while (i < 10)
	{
		cout << i << " ";
		i++;
	}
	cout << endl;

	i = 0;
	// �ǽ� ����
	while (true)
	{
		if (i > 9) break;
		cout << i++ << " ";
	}
	cout << endl;

	// ��������
	int myArray[]{ 1,2,3,4,5,4,3,1,2 };
	for (int i = 0; i < sizeof(myArray) / sizeof(int); i++)
	{
		if (myArray[i] > myArray[i + 1])
		{
			continue;
		}
		cout << myArray[i] << " ";
	}
	cout << endl;

	return 0;
}