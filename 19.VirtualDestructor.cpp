#include<iostream>
using namespace std;

// to delete the whole object i.e. the object of both base and derived class
// need to make base class virtual
class base
{
public:
 virtual ~base()  // base class is now a virtual class
{
    cout<<"base class is deleted";
}
};
class derived : public base
{
    public:
    ~derived()
    {
        cout<<"derived class is deleted"<<endl;
    }
};
int main()
{
    base *ptr = new derived;

    delete ptr;

    return 0;
}
//first the derived class destructor will be called
// derived class will call base class constructor 
// then the base class destructor will be called