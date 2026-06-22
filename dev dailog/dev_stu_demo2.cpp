#include<iostream>
using namespace std;
class Student{
	private:
		long num;
		double score;
	public:
		void get_value(){
			cin>>num;
			cin>>score;
		}	
		double get_score()
		{
			return score;
		}
		void display(){
			cout<<num;
			cout<<" ";
			cout<<score<<endl;
		}
};
void max(Student *p,int n){
	Student *max_score=p;//将单独将p赋值，是将p的第一个元素的地址赋值给max_score 
	for(int i=0;i<n;++i)
	{
		if (p[i].get_score()>max_score->get_score())
		{
			max_score=&p[i];
		}
	}
	max_score->display();
	
};
int main ()
{
	Student stu[5];
	for (int i=0;i<5;++i)
	{
		stu[i].get_value();
	}
	max(stu,5);
	
	
	
	
	return 0;
}
