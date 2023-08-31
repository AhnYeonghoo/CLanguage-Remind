#include <stdio.h>

unsigned char ResetBit(unsigned char destData, unsigned char bitNum)
{
	if (bitNum < 8)
	{
		destData = destData & ~(0x01 << bitNum);
		return destData;
	}
}

void main10_03_01()
{
	unsigned char lampState = 0; // 전등이 꺼져있음.
	lampState = 1; // 램프가 켜져있음.
	
	// 16진법과 2진법
	unsigned char data = 0x5A; //
	printf("%d", data);
	
	// 변수의 특정 비트를 0으로 만드는 예제
	lampState = 0x7F;
	printf("%X->", lampState);
	lampState = ResetBit(lampState, 3);
	printf("%X->", lampState);
	return;
}