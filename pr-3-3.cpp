#include<iostream>

using namespace std;

class animal
{
    public :
        string name;
        int age;
        string place;
        string origin;

    public :
        void setData(int a,string n,string p,string o)
        {
            age = a;
            name = n;
            place = p;
            origin = o;
        }
};

class zebra : public animal
{
    public :
        void setzebra()
        {
            cout<<"The zebra's name is   :"<<name<<endl;
			cout<<"The zebra's age is    :"<<age<<endl;
			cout<<"The zebra is from     :"<<place<<endl;
			cout<<"The zebra's origin is :"<<origin<<endl;
			cout<<"_____________________________________"<<endl;
        }
};  

class dolphin : public animal
{
    public :
        void setdolphin()
        {
            cout<<"The dolphin's name is   :"<<name<<endl;
			cout<<"The dolphin's age is    :"<<age<<endl;
			cout<<"The dolphin is from     :"<<place<<endl;
			cout<<"The dolphin's origin is :"<<origin<<endl;
        }
};

int main()
{
    zebra z1;
    dolphin d1;

    z1.setData(8,"riva","surat","vapi");
    d1.setData(5,"kavi","tapi","ahemdabad");

    z1.setzebra();
    d1.setdolphin();    
}