#include<iostream>
using namespace std;
//friend class -- two classes can communicate using friend class
class one
{
    private:
    int x;
    public:
    one(int a=0)
    {
        x=a;
    }

    friend class two;   //friend class declaration

};
//class two can access private data of class one
class two{
    private:
    int y;
    public:
    two(int b=0) {
        y=b;
    }

    int sum() {
        one obj1(7);

        int sum=obj1.x+y; //can use the class one features
        cout<<"the sum is:"<<sum;
        return sum;
    }
};

int main()
{
    two obj2(4);
    obj2.sum();
    return 0;
}
