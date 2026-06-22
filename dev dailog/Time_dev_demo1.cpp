#include<iostream>
using namespace std;
class Date;
class Time{
	private:
		int hour;
		int minute;
		int sec;
	public:
		Time (int h,int m,int s):hour(h),minute(m),sec(s){};
		void display(const Date &d);
};
class Date{
	private:
		int mouth;
		int day;
		int year;
	public:
		Date (int y,int m,int d):year(y),mouth(m),day(d){};
		friend class Time;//让Time类可以作为友元访问Date类内的成员 
};
void Time::display(const Date &d)
{
	cout <<hour<<":"<<minute<<":"<<sec<<endl;
	cout<<d.year<<"-"<<d.mouth<<"-"<<d.day<<endl;//这里直接在类外定义是为了避免出现，在time类中定义，但date类的声明虽有但定义还是没有的情况 
}
int main ()
{
	Time t1(10,34,56);
	Date d1(2025,4,28);
	t1.display(d1);
	
	
	
	
	return 0;
}
