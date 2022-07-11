#include<iostream>
#include<string>
using namespace std;
class base
{
public:
        int z;
        virtual void x(){   //only derived class functionality gets called
            cout<<"base class"<<endl;
        }    
};
class der1: public base
{
public:
        void x(){
            cout<<"x of derived 1"<<endl;
        }
        
};
class der2: public base
{
public:
        void x(){
            cout<<"x of derived 2"<<endl;
        }
        

};

int main(){
    der1 obj;
    der2 obj2;
    
    base *ptr;
    ptr=&obj;
    ptr->x(); //if there is no virtual it will call the base class

    ptr=&obj2;
    ptr->x(); //if no virtual it will call the base class
     return 0;
}

//the programe that appears to be calling a function of one class but in reality be calling function of another class
