#include <iostream>
using namespace std;



int mainExcerise()
{
	int second = 0;
	cout << "�ʸ� �Է��ϼ���: ";
	cin >> second;
	int hour{ 0 }, minute{ 0 };
	
	if (second < 60)
	{
		cout << second << "��" << endl;
	}
	else if (second == 3600)
	{
		minute = second / 60;
		hour = minute / 60;
		second = second % 60;
		minute = minute % 60;
		cout << hour << "�ð�" << " " << minute << "��" << " " << second << "��" << endl;
	}
	else if (second < 3600)
	{
		minute = second / 60;
		hour = minute / 60;
		second = second % 60;
		minute = minute % 60;
		cout << minute << "��" << " " << second << "��" << endl;
	}
	else if (second > 3600)
	{
		minute = second / 60;
		hour = minute / 60;
		second = second % 60;
		minute = minute % 60;
		cout << hour << "��" << " " << minute << "��" << " " << second << "��" << endl;
	}
	
	return 0;
}