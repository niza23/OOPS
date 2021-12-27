#include<iostream>

using namespace std;

//every object will allocate separate memroy for themselves
// static member is comman for all objects
class base
{
    private:
    int a;
    int b;
    public:
    base()
    {
        a=5;
        b=6;
        stat++;
        cout<<"values are"<<a<<b;
    }
    static int stat;

};

int main()
{
    base a1;
    base a2; 
    return 0;
}