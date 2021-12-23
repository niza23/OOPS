#include<iostream>
#include<string>
using namespace std;

class person{
    private:
    int age;
    string name;
    float height;


    public:
    // person(){
    //     name="Null";
    //     age=0;
    //     height=0;
    // }
    // no need of default constructor instead we can define it within parametrized constructor

    person(string x="Null",int y=0,int z=0) //these will work as the default values
    { 
        name=x;
        age=y; 
        height=z;
    }
    //copy constructor are used for creating new objects from existing object
    
    person(person &obj1) //as a paramter we will use the reference of the obj1
    {
        age=obj1.age;
        name=obj1.name;
        height=obj1.height;
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
    
    person obj1("nidhi",7,6); //parameterized constructor
    person obj2(obj1); //it passes the argument of the first object
    person obj3; //non-parameterized constructor
    obj1.get();
    obj2.get();
    obj3.get();
   
    return 0;
}