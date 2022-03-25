#include<iostream>
#include<string>
using namespace std;
class A{
    public:
    A()
    {
        cout<<"default constructor"<<endl;
    }
    A(int b)
    {
        cout<<"parametrized constructor"<<endl;
    }

};
class B : public A
{
    //empty 
};

int main()
{
    B obj; //if derived class has no default constructor, it will call base's class default constructor
    B obj2(7); //this will give an error as there is no parametrized constructor present in derived class
    
    return 0;

}


