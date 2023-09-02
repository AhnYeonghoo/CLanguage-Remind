#include <iostream>
using namespace std;



int mainExcerise()
{
	int second = 0;
	cout << "초를 입력하세요: ";
	cin >> second;
	int hour{ 0 }, minute{ 0 };
	
	if (second < 60)
	{
		cout << second << "초" << endl;
	}
	else if (second == 3600)
	{
		minute = second / 60;
		hour = minute / 60;
		second = second % 60;
		minute = minute % 60;
		cout << hour << "시간" << " " << minute << "분" << " " << second << "초" << endl;
	}
	else if (second < 3600)
	{
		minute = second / 60;
		hour = minute / 60;
		second = second % 60;
		minute = minute % 60;
		cout << minute << "분" << " " << second << "초" << endl;
	}
	else if (second > 3600)
	{
		minute = second / 60;
		hour = minute / 60;
		second = second % 60;
		minute = minute % 60;
		cout << hour << "시" << " " << minute << "분" << " " << second << "초" << endl;
	}
	
	return 0;
}