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
        cout<<"parametrized constructor of base class and the parameter is:"<<b<<endl;
    }

};
class B : public A
{
    public:
    B():A() 
    {
        cout<<"default of derived class in base ";
    }
    // compiler will first call base class
    // then constructor of derived class
    B(int x):A( x)
    {
        cout<<"para of derived class:"<<x+3;
    }
    // compiler will first call base class parameterized constructor
    // then parameterized constructor of derived class


};
int main()
{
    B obj();
    B obj2(3);
    return 0;
}
