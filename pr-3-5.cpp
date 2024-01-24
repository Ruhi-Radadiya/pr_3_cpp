//1. WAP to find sum of all three number’s cubes by
//implementing single level inheritance: Class X->Class Y
//- Class X has following members: a, b & c attributes in
//integer data type
//- Class Y has following members: setData() and
//getData() methods
#include<iostream>
using namespace std;

class A{
	public:
		int a;
		int b;
		int c;
	public:	
		void getA(){
			cout<<"Enter A:";
			cin>>a;
			cout<<"Enter B:";
			cin>>b;
			cout<<"Enter C:";
			cin>>c;	
		}	
};
class B : public A
{
	public:	
		void getB(){
			cout<<"______________"<<endl;
			cout<<"CUBE of A is:"<<a*a*a<<endl;
			cout<<"SQUARE of A is:"<<a*a<<endl;
			cout<<"CUBE of B is:"<<b*b*b<<endl;
			cout<<"SQUARE of B is:"<<b*b<<endl;
			cout<<"CUBE of C is:"<<c*c*c<<endl;	
			cout<<"SQUARE of C is:"<<c*c<<endl;	
		}
};
int main(){
	B b1;
	
	b1.getA();
	b1.getB();
	
	return 0;
}