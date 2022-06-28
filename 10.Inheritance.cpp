#include<iostream>
#include<string>

using namespace std;
class rec{
    public:
    int l,b;
    void area()
    {
        cout<<"area is"<<l*b<<endl;
    }

};
class cuboid : public rec
{
public:
int h;
void vol()
{
    cout<<"the volume of cuboid"<<l*b*h;

}
};

int main()
{
    cuboid c;
    c.l=10;
    c.b=20;
    c.h=30;
    c.area();
    c.vol();
    return 0;

}


