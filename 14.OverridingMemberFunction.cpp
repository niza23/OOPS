#include<iostream>
#include<string>
using namespace std;
class A{
    public:
   void msg()
   {
       cout<<"this is the msg of base class"<<endl;
   }
};
class B : public A
{
    public:
    void msg()
    {
    cout<<"this is the msg from derived class"<<endl;  //this will be the latest function
    }
};

 // what if you want to call function from the base class and don't want to overwrite it?
   //soln: all the base class function in derived class

class C: public A{
    public:
    void msg()
    {
        cout<<"same function from the derived class i.e. no function overriding";
        A::msg();  //calling of msg function from base class A
        //base_class :: function name
    }

};

int main()
{
    A obja;
    obja.msg(); //---here the finction from base class will be called
 
    B objb;
    objb.msg();  //--here the function will be updated by the latest function i.e. function from the derived class

    C objc;
    objc.msg();

    return 0;

}
