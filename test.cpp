// ConsoleApplication2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
using namespace std;
class CNamudeke
{
private:
	int Year;
	int Month;
	int Day;
	int Hour;
	int Minute;
	int Second;
	int check;
public:
	CNamudeke();
	CNamudeke(int y, int m, int d, int h, int mi, int s);
	CNamudeke()
	{
		cout << "被调用了" << endl;
	}
	void print();
	void addoneday();
	int setDay(int y, int m, int d, int h, int mi, int s);
	int getYear();
	int getMonth();
	int getDay();
	int getHour();
	int getMinute();
	int getSecond();
};
CNamudeke::CNamudeke()
{
	Year = 1999;
	Month = 5;
	Day = 20;
	Hour = 17;
	Minute = 6;
	Second = 33;
}
CNamudeke::CNamudeke(int y, int m, int d, int h, int mi, int s)
{
	Year = y;
	Month = m;
	Day = d;
	Hour = h;
	Minute = mi;
	Second = s;
	Year = y;
	Month = m;
	Day = d;
	Hour = h;
	Minute = mi;
	Second = s;
	if (check() == -1||check() == 1)
	{
		Month = 1;
		Day = 1;
		cout << "输入有误,月日已置1" << endl;
	}
}
int CNamudeke::getYear()
{
	return Year;
}
int CNamudeke::getMonth()
{
	return Month;
}
int CNamudeke::getDay()
{
	return Day;
}
int CNamudeke::getHour()
{
	return Hour;
}
int CNamudeke::getMinute()
{
	return Minute;
}
int CNamudeke::getSecond()
{
	return Second;
}
int CNamudeke::check()
{
	int flatYearDays::[12] = { 31,28,31,30,31,31,30,31,30,31 };
	int leapYearDays::[12] = { 31,29,31,30,31,31,30,31,30,31 };
	if (Year % 400 == 0 || (Year % 4 == 0 && Year % 100 != 0))
	{
		if (leapYearDays[Month - 1] < 1 || Day < 1)
			return 1;
	}
	return 0;
	}
}