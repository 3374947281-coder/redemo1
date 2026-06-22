#include<iostream>
using namespace std;
class Complex{
	private:
		int imag;
		int real;
	public:
		Complex (int r=0,int i=0):real(r),imag(i){}
		Complex operator-(const Complex &other){
			int new_imag=this->imag-other.imag;
			int new_real=this->real-other.real;
			return Complex(new_real,new_imag);
		}
		friend Complex operator*(const Complex &s1,const Complex &s2);
		void display()
		{
			cout<<"("<<real<<","<<imag<<"i"<<")"<<endl;
		}
};
Complex operator*(const Complex &s1,const Complex &s2)
{
	int new_imag2=s1.real*s2.imag+s1.imag*s2.real;
	int new_real2=s1.real*s2.real-s1.imag*s2.imag;
	return Complex(new_real2,new_imag2);
}
int main ()
{
	Complex c1(3,4);
	Complex c2(5,-10);
	Complex c3=c1-c2;
	Complex c4=c1*c2;
	c1.display();
	c2.display();
	c3.display();
	c4.display();
	return 0;
}
