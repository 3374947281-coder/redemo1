#include<iostream>
using namespace std;
class Matrix
{
	private:
		int data[2][3];
	public:
		Matrix ()
		{
			for (int i=0;i<2;++i)
			{
				for (int j=0;j<3;++j)
				{
					data[i][j]=0;
				}
			}
		}
		friend istream& operator>>(istream& in,Matrix& m){
			for (int i=0;i<2;++i)
			{
				for (int j=0;j<3;++j)
				{
					in >>m.data[i][j];
				}
			}
			return in;
		}	
		friend ostream& operator<<(ostream& out,const Matrix& m)
		{
			for (int i=0;i<2;++i)
			{
				for (int j=0;j<3;++j)
				{
					out <<m.data[i][j]<<" ";
					if (j==2)
					{
						out <<endl;
					}
				}
			}
			return out;
		}
};
int main ()
{
	Matrix m1;
	cin>>m1;
	cout<<m1;
	
	
	
	
	
	
	return 0;
}
