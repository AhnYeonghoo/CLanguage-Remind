#include <stdio.h>
#include <string.h>
int GetStringLength(char data[]);

void main12_02_02()
{
	int dataLength;
	char data[10] = "happy";
	dataLength = GetStringLength(data);
	printf("data length = %d\n", dataLength);
	// 혹은 내장함수 사용
	char data2[] = "happy";
	dataLength = strlen(data2);
	printf("data length2= %d\n", dataLength);
}

int GetStringLength(char data[])
{
	int count = 0;
	
	while (data[count]) count++;
	return count;
}