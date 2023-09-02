#include <iostream>

using namespace std;

int mainDataType()
{
	// ������ ������ �� �ڷ����� �̸� �����ؾ� �մϴ�.
	// �ڷ����� �ٲ� �� �����ϴ�.
	
	// ���������� �޸𸮸� �̹� ���� �ֽ��ϴ�.
	int i; // ���� ����
	i = 123; // ������ �� ���� (��ü ���۷��� �ƴ�)

	// sizeof �Ұ�
	cout << i << " " << sizeof(i) << endl;

	float f = 123.456f; // ������ f ����
	double d = 123.456;

	cout << f << " " << sizeof(f) << endl;
	cout << d << " " << sizeof(d) << endl;

	cout << 123 + 4 << " " << sizeof(123 + 4) << endl;

	cout << sizeof(int) << endl;
	// C++�� ���� �ϳ��� ���ڿ��� �����մϴ�.
	char c = 'a';
	char str[] = "Hello, World!";
	cout << c << " " << sizeof(c) << endl;
	cout << str << " " << sizeof(str) << endl;

	// �� �ܿ��� �پ��� �ڷ����� �����մϴ�.
	
	// ����ȯ
	i = 987.654; // double�� int�� ������ ����
	cout << "int from double " << i << endl;

	f = 567.89; // �̰͵� ����ȯ
	
	// �⺻ ������
	
	// i = 987
	i += 100; // i = i + 100;
	i++; // i = i + 1;

	cout << i << endl; // �����غ�����.
	
	cout << " -----Boolean------- " << endl;
	// �Ҹ���
	bool is_good = true;
	is_good = false;
	
	cout << is_good << endl;

	is_good = true;
	cout << is_good << endl;
	cout << boolalpha << true << endl;
	cout << is_good << endl;
	cout << noboolalpha << true << endl;

	// �� ���� �� ���� �Ұ�
	
	cout << boolalpha;
	cout << (true && true) << endl; // true
	cout << (true || false) << endl; // true
	
	
	// ��
	cout << (1 > 3) << endl;
	cout << (3 == 3) << endl;
	cout << (i >= 3) << endl;
	cout << ('a' != 'c') << endl;
	cout << ('a' != 'a') << endl;
	
	// ����(scope)
	
	i = 123; // �� ���� ����

	{
		int i = 345; // <- �� ���� ������ �ٸ� ����
		cout << i << endl;
	}

	cout << i << endl;
	
	return 0;
}