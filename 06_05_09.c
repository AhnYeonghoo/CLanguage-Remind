#include <stdio.h>

void main06_05_09()
{
	int data = 7;
	printf("[%d] [%5d]", data, data);
	printf("[%5d] [%05d] [%-5d]", data, data, data);
}