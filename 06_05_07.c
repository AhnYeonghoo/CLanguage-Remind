#include <stdio.h>

void main06_05_07()
{
	int data1 = 10;
	int data2 = 010; // 8진수
	int data3 = 0x10; // 16진수
	printf("%x, %d, %o", data1, data2, data3);
	float data = 12.34f;
	printf("%f, %e, %E", data, data, data);
}