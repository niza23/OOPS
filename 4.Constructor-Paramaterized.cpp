#include<iostream>
#include<string>
using namespace std;

class person{
    private:
    int age;
    string name;
    float height;

    public: 
    person(string x,int y,int z) //the arguments are paased here
    { 
        name=x;
        age=y; 
        height=z;
    }
    void get()
    {
        cout<<"name is:"<<name<<endl;
        cout<<"age is:"<<age<<endl;
        cout<<"height is"<<height<<endl;
    }
    
};
int main()
{
    
    person obj("nidhi",7,6);
    obj.get();
   
    return 0;
}
