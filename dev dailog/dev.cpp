#include<iostream>
using namespace std;
class Student{
	private:
		long num;
		double score;
	public:
		void set_value()
		{
			cin >>num;
			cin>>score;
		}
		void display()
		{
			cout<<num;
			cout<<" ";
			cout<<score<<endl; 
//			cout<<"------------------"<<endl;
		}
}; 
int main ()
{
	Student stu[5];
	for (int i=0;i<5;++i)
	{
		stu[i].set_value();
	}
	stu[0].display();
	stu[2].display();
	stu[4].display();
	
	
	
	return 0;
}
