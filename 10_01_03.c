#include <stdio.h>

void main10_01_03()
{
	short student[20];
	short i;
	for (i = 0; i < 20; i++)
	{
		student[i] = 0;
	}

	student[1] = 10;
	printf("%d %d\n", student[1], student[2]);

	// ����ȭ �� ���ʱ�ȭ ���
	short array[20] = { 0, };
	// �迭 ũ�� �����ϱ�
	short array2[] = { 1, 2, 1, 2, 1 }; // �ڵ����� 5�� ����
	
	//�迭�� ��� ����ϱ�.
	char data[5] = { 1, 2, 3, 4, 5 };
	int result = 0;
	for (int i = 0; i < 5; i++)
	{
		result += data[i];
	}
	printf("data �迭�� ��  ����� ���� %d�Դϴ�.\n", result);
}