#include <iostream>

using namespace std;

int mainDataType()
{
	// 변수를 정의할 떄 자료형을 미리 지정해야 합니다.
	// 자료형은 바꿀 수 없습니다.
	
	// 내부적으로 메모리를 이미 갖고 있습니다.
	int i; // 변수 정의
	i = 123; // 변수에 값 지정 (객체 레퍼런스 아님)

	// sizeof 소개
	cout << i << " " << sizeof(i) << endl;

	float f = 123.456f; // 마지막 f 주의
	double d = 123.456;

	cout << f << " " << sizeof(f) << endl;
	cout << d << " " << sizeof(d) << endl;

	cout << 123 + 4 << " " << sizeof(123 + 4) << endl;

	cout << sizeof(int) << endl;
	// C++는 글자 하나와 문자열을 구분합니다.
	char c = 'a';
	char str[] = "Hello, World!";
	cout << c << " " << sizeof(c) << endl;
	cout << str << " " << sizeof(str) << endl;

	// 그 외에도 다양한 자료형이 존재합니다.
	
	// 형변환
	i = 987.654; // double을 int에 강제로 저장
	cout << "int from double " << i << endl;

	f = 567.89; // 이것도 형변환
	
	// 기본 연산자
	
	// i = 987
	i += 100; // i = i + 100;
	i++; // i = i + 1;

	cout << i << endl; // 추측해보세요.
	
	cout << " -----Boolean------- " << endl;
	// 불리언
	bool is_good = true;
	is_good = false;
	
	cout << is_good << endl;

	is_good = true;
	cout << is_good << endl;
	cout << boolalpha << true << endl;
	cout << is_good << endl;
	cout << noboolalpha << true << endl;

	// 논리 연산 몇 가지 소개
	
	cout << boolalpha;
	cout << (true && true) << endl; // true
	cout << (true || false) << endl; // true
	
	
	// 비교
	cout << (1 > 3) << endl;
	cout << (3 == 3) << endl;
	cout << (i >= 3) << endl;
	cout << ('a' != 'c') << endl;
	cout << ('a' != 'a') << endl;
	
	// 영역(scope)
	
	i = 123; // 더 넓은 영역

	{
		int i = 345; // <- 더 좁은 영역의 다른 변수
		cout << i << endl;
	}

	cout << i << endl;
	
	return 0;
}