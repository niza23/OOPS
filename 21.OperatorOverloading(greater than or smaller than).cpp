#include<iostream>
#include<string>
using namespace std;
class base
{
    private:
    int weight;
    public:
    base(int w=0){
        weight=w;
    }
    friend bool operator>(base x,base y); // return type will be boolien
    friend bool operator<(base y,base x);
    
};

bool operator <(base x,base y)
{
    return x.weight<y.weight; // will return if the value is True or False
}
bool operator >(base x,base y)
{
    return x.weight>y.weight; // will return if the value is True or False
}

int main()
{
    int w1,w2;
    cout<<"enter w1,w2";
    cin>>w1>>w2;

    base a(w1);
    base b(w2);

    if(a>b) //will call friend function 
    {
        cout<<"a is heavier";
    }
    else if(b>a)
    {
        cout<<"b is heavier";
    }
    return 0;
}
