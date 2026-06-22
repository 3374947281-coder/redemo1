#include<iostream>
using namespace std;
class Time{
	private:
		int hour;
		int second;
		int minute;
	public:
		Time(int h,int m,int s):hour(h),minute(m),second(s){};
		void display()
		{
			cout<<hour<<":"<<minute<<":"<<second<<endl;
		};
		Time operator+(const Time& other_t){
			
			int i_s=this->second+other_t.second;
			int i_m=this->minute+other_t.minute;
			int i_h=this->hour+other_t.hour;
			if (i_s>=60)
			{
				i_m+=i_s/60;
				i_s=i_s%60;
			};
			if (i_m>=60)
			{
				i_h+=i_m/60;
				i_m=i_m%60;
			}
			Time new_t(i_h,i_m,i_s);
			return new_t;
		};
};
int main ()
{
	Time t1(2,10,53);
	t1.display();
	Time t2(3,15,41);
	t2.display(); 
	Time t=t1+t2;
	t.display();
	return 0;
}
