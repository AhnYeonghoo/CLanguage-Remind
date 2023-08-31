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
	unsigned char lampState = 0; // ������ ��������.
	lampState = 1; // ������ ��������.
	
	// 16������ 2����
	unsigned char data = 0x5A; //
	printf("%d", data);
	
	// ������ Ư�� ��Ʈ�� 0���� ����� ����
	lampState = 0x7F;
	printf("%X->", lampState);
	lampState = ResetBit(lampState, 3);
	printf("%X->", lampState);
	return;
}