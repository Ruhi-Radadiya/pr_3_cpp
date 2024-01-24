#include<iostream>
#include<string>

using namespace std;

class Employee 
{
    protected:
        string name;
        string email;
        string password;

    public:
        void getEmployee() 
        {
            cout<<"Enter employee name: ";
            cin>>name;

            cout<<"Enter employee email: ";
            cin>>email;

            cout<<"Enter employee password: ";
            cin>>password;
        }

        void setEmployee() {
            cout<<"Employee Information:" <<endl;
            cout<<"Name: "<<name <<endl;
            cout<<"Email: " <<email <<endl;
            cout<<"Password: " <<password <<endl;
        }
};
class ContactInfo {
    protected:
        string contact;
        string city;

    public:
        void getContact() 
        {
            cout<<"Enter employee contact: ";
            cin>>contact;

            cout<<"Enter employee city: ";
            cin>>city;
        }

        void setContact() {
            cout<<"Contact Information:"<<endl;
            cout<<"Contact: "<<contact<<endl;
            cout<<"City: "<<city<<endl;
        }
};

class UserRole {
    protected:
        string role;

    public:
        void getUserRole() {
            cout<<"Enter employee role: ";
            cin>>role;
        }

    void setUserRole() {
        cout<<"User Role:"<<role<<endl;
    }
};

class EmployeeInfo : public Employee, public ContactInfo, public UserRole {
public:

    void getEmployeeData() {
        getEmployee();
        getContact();
        getUserRole();
    }

    void setEmployeeData() {
        setEmployee();
        setContact();
        setUserRole();
    }
};

int main() {
    
    EmployeeInfo e1;

    e1.getEmployeeData();
    cout<<"____________________________________"<<endl;
    e1.setEmployeeData();

    return 0;
}