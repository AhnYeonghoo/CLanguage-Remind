#include <stdio.h>

void main10_01_01()
{
	// 배열의 크기는 반드시 컴파일 타임에 결정될 수 있도록 상수(constants)로 선언한다.
	// 변수(variable) 선언은 불가능
	short student[20];
	student[1] = 10;
	printf("%d\n", student[1]);
	// 단 배열을 사용시에는 변수 사용 가능.
	int index = 1;
	student[index] = 20;
	printf("%d\n", student[index]);

	for (int i = 0; i < 10; i++) student[i] = 5;
	for (int i = 0; i < 10; i++) printf("%d\n", student[i]);

	short student2[20];
	student2[1] = 10;
	printf("%d %d\n", student2[1], student2[2]);
}