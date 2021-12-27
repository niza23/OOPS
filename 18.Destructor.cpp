#include<iostream>
using namespace std;
class base
{
public:
~base()
{
    cout<<"base class is deleted";
}
};
class derived : public base
{
    public:
    ~derived()
    {
        cout<<"derived class is deleted";
    }
};
int main()
{
    base *ptr = new derived;  

    delete ptr; //it will delete the memory allocated to the base class only. since the derived class object is not called

    return 0;
}