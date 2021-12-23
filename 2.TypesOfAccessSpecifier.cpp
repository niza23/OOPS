#include<iostream>
#include<string>
using namespace std;
//class
class specifier{
    //access specifier

private:
int x;

protected:
int y;

public:
int z;

void show(){
    cout<<"the value of z"<<z;
    cout<<"the value of x"<<x;
    cout<<"the value of y"<<y;
}

};

int main()
{
    //create object
    //memroy allocation
    specifier a; 
    a.x=10; //private: only works inside the class
    a.y=50; //protected: can only be accessed by the inherited class
    a.z=10; //can be accessed outside the class
    a.show();
    return 0;
    

}
