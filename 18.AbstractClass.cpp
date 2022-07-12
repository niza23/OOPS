#include<iostream>
#include<string>
using namespace std;
class base  //abstract class
{
public:
        int z;
        virtual void x() = 0; //this is pure abstract class which exist only to act as a parent of derived class
        // does not contain any body
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
    ptr->x(); 

    ptr=&obj2;
    ptr->x(); 
     return 0;
}
