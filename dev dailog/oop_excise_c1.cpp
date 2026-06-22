#include<iostream>
using namespace std;
class Box{
	private:
		float length;
		float width;
		float height;
	public:
		void get_value(){
			cin>>length;
			cin>>width;
			cin>>height;
		}	
		float volume(){
			float V=length*height*width;
			return V;
			
		}
		void display(){
			float a=this->volume();
			cout<<a<<endl;
		}
};
int main ()
{
	Box c1;
//	c1.get_value();
	c1.get_value();
	c1.volume();
	c1.display();
	
	
	
	
	return 0;
}
