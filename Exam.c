#include <stdio.h>

void mainExam(void)
{
	printf("Hello~ World!!");
	// �µ��� �����ϱ� ���ؼ��� signed char(1byte) ������ �츮���󿡼� ����ϱ� ������ �� �ڷ����� ����Ѵ�.
	signed char temperature;
	temperature = - 2; // ���� 2���� temperature ������ ������.
	printf("%d", temperature);

	unsigned char age; // ��ȣ���� 1byte
	age = 52;
	signed short int dday; // ��ȣ�ִ� 2byte �ڷ���
	dday = -20;
	
	unsigned short int seconds; // ��ȣ���� 2byte �ڷ���
	seconds = 35000;

	signed long int money; // ��ȣ�ִ� 4byte
	money = 700000;

	unsigned long int timeSeconds; // ��ȣ���� 4byte
	timeSeconds = 1453100624;

	float pi; // 4byte �Ǽ� �ε��Ҽ���
	pi = 3.14f;
	
	// �Ҽ��� ���� 6�ڸ� �̻� ����Ϸ��� 64bit ����� double �ڷ����� ���
	// double�� �Ҽ��� ���� 14�ڸ����� �����ϰ� ����� �� �ִ�.
	double pi2;
	pi2 = 3.141592654;
	
	int n; // 4����Ʈ �޸� ������ �ּ� ��� n �̶�� ���� �̸����� �����.
	int value; // 4����Ʈ ũ���� value ������ � ���� ����Ǿ� �ִ��� �� �� ����
	value = 0; // ������ �ʱ�ȭ�Ѵ�.

	
	return;
}