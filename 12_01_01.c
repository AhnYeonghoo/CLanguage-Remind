#include <stdio.h>

void main10_01_01()
{
	// �迭�� ũ��� �ݵ�� ������ Ÿ�ӿ� ������ �� �ֵ��� ���(constants)�� �����Ѵ�.
	// ����(variable) ������ �Ұ���
	short student[20];
	student[1] = 10;
	printf("%d\n", student[1]);
	// �� �迭�� ���ÿ��� ���� ��� ����.
	int index = 1;
	student[index] = 20;
	printf("%d\n", student[index]);

	for (int i = 0; i < 10; i++) student[i] = 5;
	for (int i = 0; i < 10; i++) printf("%d\n", student[i]);

	short student2[20];
	student2[1] = 10;
	printf("%d %d\n", student2[1], student2[2]);
}