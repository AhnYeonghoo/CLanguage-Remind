#include <iostream>

using namespace std;

int mainConsoleIO()
{
	// cin은 데이터를 흘려넣어 보내는 스트림이고
	// 그 데이터를 해석하는 것은 자료형
	// 자료형에 따라서 알아서 처리해주기 때문에 scanf()보다 편리

	char userInput[100];

	// cin과 getline의 차이
	cout << "원하는 문장을 입력해주세요." << endl;
	cout << "입력: ";

	//cin >> userInput; // 빈칸까지만 인식함
	
	// cin.getline(userInput, sizeof(userInput)); -> 엔터까지 입력받음

	//cout << "메아리: " << userInput << endl;
	
	int number = -1;
	int number2 = -1;
	cin >> userInput;
	cin.ignore(100, '\n'); // 최대 100글자까지 입력 받아서 무시하겠다.
	
	cin >> number;
	cin >> number2;
	
	cout << userInput << " " << number << " " << number2 << endl;

	// 참고: cin.ignore(numeric_limits<streamsize>::max(), '\n')

	return 0;
}