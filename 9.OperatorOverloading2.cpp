#include<iostream>
#include<string>
using namespace std;
class A{
    private:
    int weight;
    public:
    A(int x=0){
        weight=x;
    }
    //pre-increment
    void operator++() {
        ++weight;
    }
    //post-increment
    void operator++(int)
    {
        weight++;
    }

    void show()
    {
        cout<<"the weight is:"<<weight<<endl;
    }


};
int main()
{
    A pree(99);
    ++pree;
    pree.show();
    pree++;
    pree.show();
    return 0;
}