#include<iostream>
#include<string>
using namespace std;
class A{
    public:
    A()
    {
        cout<<"default constructor of base class"<<endl;
    }
    A(int b)
    {
        cout<<"parametrized constructor of base class"<<endl;
    }

};
class B : public A
{
    public:
    B()
    {
        cout<<"default constructor of derived class"<<endl;
    }
    B(int b)
    {
        cout<<"parametrized constructor of derived class"<<endl;
    }
};

int main()
{
    B obj; 
    //it will call default constructor of base class 
    //it will call default constructor of derived class
    B obj2(7); 
    //it will call default constructor of base class
    //it will NOT call parametrized constructor of base class
    //it will call default constructor of derived class
    //it will call parametrized constructor of derived class
    return 0;

}


