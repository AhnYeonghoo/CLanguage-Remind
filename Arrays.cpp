#include <iostream>

using namespace std;

int mainArrays()
{

	int a = 1;
	int b = 2;
	int c = 3;
	// ...

	// 같은 자료형의 데이터를 저장하기 위해 메모리를 미리 잡아놓은
	int myArray[3]{ 1, 2, 3 }; // 초기화할 때는 {} 안에 값 나열
	
	// 인덱싱 (zero-based)
	cout << myArray[0] << " "
		<< myArray[1] << " "
		<< myArray[2] << endl;

	myArray[1] = 5;

	cout << myArray[0] << " "
		<< myArray[1] << " "
		<< myArray[2] << endl;
	
	// 문자열은 기본적으로 문자의 배열
	// 문자 배열은 마지막에 \n가 자동으로 포함돼서 원래 길이 + 1이 문자 배열 길이임
	char name[75] = "Hello, World!"; // 문자''와 문자열"" 구분
	cout << name << " " << sizeof(name) << endl;

	name[0] = 'A';
	name[1] = 'B';
	name[2] = 'C';
	cout << endl;
	cout << name << endl; // ABC

	name[2] = '\0'; // \0은 Null Character
	cout << name << endl;

	char name2[] = "Hello, World!";
	cout << name2 << " " << sizeof(name2) << endl;
	
	name2[10] = 'A';
	name2[11] = 'B';
	name2[12] = 'C';

	cout << name2 << endl;
	
	return 0;
}