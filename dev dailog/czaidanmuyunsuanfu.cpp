#include<iostream>
using namespace std;
class number{
	private:
		long long num;
	public:
		number(long long n):num(n){}
		number operator*(){
			long long new_number=num*num;
			return number(new_number);
		}
		void display()
		{
			cout<<num<<endl;
		}
};
int main ()
{
	number n1(10);
	number n2=*n1;
	n2.display();
	
	
	
	
	
	return 0;
}
