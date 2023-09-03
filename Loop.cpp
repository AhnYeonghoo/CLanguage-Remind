#include <iostream>
using namespace std;

int mainLoop()
{
	// For 기본 예제
	for (int i{ 0 }; i < 10; i++)
	{
		cout << i << " ";
	}
	cout << endl;

	// 배열 데이터 출력 연습 문제로 제공
	// 힌트: sizeof(my_array) / sizeof(int)
	int my_array[] = { 1, 2, 3, 4, 5, 4, 3, 2, 1 };

	// for (...)
	{
		// TODO: 완성
		for (const auto& value : my_array)
		{
			cout << value << " ";
		}
		cout << endl;
		
	}

	// 문자열 출력
	char my_string[] = "Hello\0, World!";

	// 문자열을 한 글자씩 출력하기
	// cout << my_string << endl; 사용 X
	// 힌트: sizeof(), '\0', break;
	
	for (int i = 0; i < sizeof(my_string) / sizeof(char); i++)
	{
		if (my_string[i] == '\0')
		{
			break;
		}
		cout << my_string[i] << " ";
	}
	cout << endl;

	// while 기본 예제

	int i = 0;
	while (i < 10)
	{
		cout << i << " ";
		i++;
	}
	cout << endl;

	i = 0;
	// 실습 문제
	while (true)
	{
		if (i > 9) break;
		cout << i++ << " ";
	}
	cout << endl;

	// 연습문제
	int myArray[]{ 1,2,3,4,5,4,3,1,2 };
	for (int i = 0; i < sizeof(myArray) / sizeof(int); i++)
	{
		if (myArray[i] > myArray[i + 1])
		{
			continue;
		}
		cout << myArray[i] << " ";
	}
	cout << endl;

	return 0;
}