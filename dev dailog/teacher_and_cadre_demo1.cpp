#include<iostream>
#include<string>
using namespace std;
class Teacher{
	protected:
		string name;
		int age;
		char sex;
		string addr;
		long tel;
		string title;
	public:
		Teacher(string n,int a,char s,string ad,long t,string tit):
		name(n),age(a),sex(s),addr(ad),tel(t),title(tit){}
		void display()
		{
			cout<<"姓名："<<name<<endl;
			cout<<"年龄："<<age<<endl;
			cout<<"性别："<<sex<<endl;
			cout<<"职称："<<title<<endl;
			cout<<"住址："<<addr<<endl;
			cout<<"电话号码："<<tel<<endl;
		}
			
};
class Cadre{
	protected:
		string name;
		int age;
		char sex;
		string addr;
		long tel;
		string post;
	public:
		Cadre(string n,int a,char s,string ad,long t,string p):
		name(n),age(a),sex(s),addr(ad),tel(t),post(p){}
//		void display()
//		{
//			cout<<"姓名："<<name<<endl;
//			cout<<"年龄"<<age<<endl;
//			cout<<"性别"<<sex<<endl;
//			cout<<"职称"<<title<<endl;
//			cout<<"住址"<<addr<<endl;
//			cout<<"电话号码"<<tel<<endl;
//		}
};
class Teacher_Cadre:public Teacher,Cadre{
	private:
		double wage;
	public:
		Teacher_Cadre(string name,int age,char sex,string title,string post,string addr,long tel,double wage):
		Teacher(name,age,sex,addr,tel,title),
		Cadre(name,age,sex,addr,tel,post),
		wage(wage){}
		void show(){
			Teacher::display();
			cout<<"职务："<<post<<endl;
			cout<<"工资："<<wage<<endl;
		}
		
};
int main ()
{
	Teacher_Cadre tc1("wang",40,'m',"prof","president","beijing",1234567,1500.5);
	tc1.show();
	
	
	
	
	
	
	
	return 0;
}
