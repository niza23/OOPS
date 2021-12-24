#include<iostream>
#include<string>
using namespace std;
//user defined data types cannot be operated by operators such as +,-,* etc they only operates on pre-defined data types
class A{
private:
int weight;
public:
A (int x=0)
{
    weight=x;
}
void print()
{
    cout<<"weight is:"<<weight;
}

// A addweight(A w2) //separate function for addition
// {
//     A temp;
//     temp.weight=weight+w2.weight;
//     return temp;
// } ----> traditional approach


//for operator overloading
A operator + (A w2)
{
    A temp; //another temp obj
    temp.weight=weight+w2.weight;
    return temp;
}


};
int main()
{
    A person1(64);
    A person2(54);
    A total; //new object for total
    // total=person1.addweight(person2)
    // cout<<total;

    total=person1+person2;
    total.print();
    

}