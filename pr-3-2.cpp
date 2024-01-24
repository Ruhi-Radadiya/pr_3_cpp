#include<iostream>
using namespace std;

class Mother {
    public:
        void mother() 
        {
            cout<<"I am her Mother"<<endl;
        }
};
class Daughter : public Mother 
{
    public:
        void daughter() 
        {
            cout<<"I am her Daughter"<<endl;
        }
};

int main() {

    Daughter d1;
    d1.mother();
    d1.daughter();

    return 0;
}