#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main12_02_04()
{
	char data[10] = { 'a', 'b', 'c', 0 };
	char result[16];

	strcpy(result, data);
	strcat(result, "def");
	printf("%s + \"def\" = %s\n", data, result);
}