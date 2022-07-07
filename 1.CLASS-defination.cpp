#include<iostream>
#include<string>
using namespace std;

class house{
    //access specifier

private:
//member variable(will be hidden)
int length=0,breadth=0;

public:

//member functions
void setdata(int x,int y){
    length=x;
    breadth=y;
}
void area()
{
    cout<<"area is:"<<length*breadth;
}
};
int main()
{
    //create object
    house a;
    a.setdata(300,500);
    a.area();

}
