#include<iostream>
using namespace std;

class A{
	public:
		int id;
		string name;
		string role;
		int salary;
		int experience;
		string com_name;
		string address;
		string email;
		int contact;
	public:
		void setA(){	
			cout<<"Enter your id:"<<endl;
			cin>>id;
			cout<<"Enter your name:"<<endl;
			cin>>name;
			cout<<"Enter your role in company:"<<endl;
			cin>>role;
	}
};
class B : public A
{
	public:
		void setB(){
			cout<<"Enter your salary:"<<endl;
			cin>>salary;
			cout<<"Enter your experience:"<<endl;
			cin>>experience;
			cout<<"____________________________"<<endl;
		}	
};
class C : public B
{
	public:
		void getC(){
			cout<<"NAME IS   :"<<name<<endl
				<<"ROLE IS   :"<<role<<endl
				<<"SALARY IS :"<<salary<<endl;
			cout<<"_____________________________"<<endl;
		}
		
		void setC(){
			cout<<"Enter your company name:"<<endl;
			cin>>com_name;
			cout<<"Enter company address:"<<endl;
			cin>>address;
		}	
};
class D : public C
{
	public:
		void setD(){
			cout<<"Enter your email:"<<endl;
			cin>>email;
			cout<<"Enter your contact number:"<<endl;
			cin>>contact;
			cout<<"_____________________________"<<endl;
		}
			
		void getD(){
			cout<<"ID IS             :"<<id<<endl
				<<"NAME IS           :"<<name<<endl
				<<"ROLE IS           :"<<role<<endl
				<<"SALARY IS         :"<<salary<<endl
				<<"EXPERIENCE IS     :"<<experience<<endl
				<<"COMPANY NAME IS   :"<<com_name<<endl
				<<"ADDRESS IS        :"<<address<<endl
				<<"EMAIL IS          :"<<email<<endl
				<<"CONTACT NUMBER IS :"<<contact<<endl;
		}
};
int main(){
	D d1;
	
	d1.setA();
	d1.setB();
	d1.getC();
	d1.setC();
	d1.setD();
	d1.getD();
	
	return 0;
}