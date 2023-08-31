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

	// 간결화 한 영초기화 방법
	short array[20] = { 0, };
	// 배열 크기 생략하기
	short array2[] = { 1, 2, 1, 2, 1 }; // 자동으로 5개 생성
	
	//배열의 요소 사용하기.
	char data[5] = { 1, 2, 3, 4, 5 };
	int result = 0;
	for (int i = 0; i < 5; i++)
	{
		result += data[i];
	}
	printf("data 배열의 각  요소의 합은 %d입니다.\n", result);
}