#include<iostream>
using namespace std;
// friend function is used to access the protected and private parts of the class even from the outside of the class
class alpha
{
    private:
    int a1;

    public:
    alpha(int arg =0)
    {
        a1=arg;
    }

    friend void fun();

};
class beta
{
     private:
    int b1;

    public:
    beta(int arg=0)
    {
        b1=arg;
    }

    friend void fun();

};

void fun()
{
    alpha a(10);  //the object of the alpha class is made
    beta b(3);   //object of beta class

    int x=a.a1+b.b1;  //friend func is able to access the private members of classes

    cout<<"the sum  is "<<x;

}
int main()
{
    fun();  //this will give the output of sum
    return 0;
}