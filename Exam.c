#include <stdio.h>

void mainExam(void)
{
	printf("Hello~ World!!");
	// 온도를 저장하기 위해서는 signed char(1byte) 형으로 우리나라에선 충분하기 때문에 이 자료형을 사용한다.
	signed char temperature;
	temperature = - 2; // 영하 2도를 temperature 변수에 저장함.
	printf("%d", temperature);

	unsigned char age; // 부호없는 1byte
	age = 52;
	signed short int dday; // 부호있는 2byte 자료형
	dday = -20;
	
	unsigned short int seconds; // 부호없는 2byte 자료형
	seconds = 35000;

	signed long int money; // 부호있는 4byte
	money = 700000;

	unsigned long int timeSeconds; // 부호없는 4byte
	timeSeconds = 1453100624;

	float pi; // 4byte 실수 부동소수점
	pi = 3.14f;
	
	// 소수점 이하 6자리 이상 사용하려면 64bit 기반의 double 자료형을 사용
	// double은 소수점 이하 14자리까지 안전하게 출력할 수 있다.
	double pi2;
	pi2 = 3.141592654;
	
	int n; // 4바이트 메모리 공간을 주소 대신 n 이라는 변수 이름으로 사용함.
	int value; // 4바이트 크기의 value 변수에 어떤 갑이 저장되어 있는지 알 수 없음
	value = 0; // 변수를 초기화한다.

	
	return;
}