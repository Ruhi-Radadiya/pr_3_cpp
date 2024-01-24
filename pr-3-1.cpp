#include<iostream>
using namespace std;

class area{
	public:
		int width;
		int height;
	public:
		area(){
			cout<<"Enter width:";
			cin>>width;
			cout<<"Enter height:";
			cin>>height;
		}	
};

class triangle : public area
{
	public:
		void setT(){
			cout<<"Triangle area is:"<<(width*height)/2<<endl;
		}
};

class rectangle : public area
{
	public:
		void setR(){
			cout<<"Rectangle area is:"<<width*height<<endl;
			cout<<"_____________________________"<<endl;
		}
};

int main(){
	rectangle r1;
	r1.setR();
	triangle t1;
	t1.setT();
	
	return 0;
}