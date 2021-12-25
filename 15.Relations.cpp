#include<iostream>
#include<string>
using namespace std;
//1)isA relation -- it is like inheritance, old features can be added or modified and new features can be added
class base
{
public:
        int z;
        void x(){
            cout<<"base class"<<endl;
        }
        void y(){
            cout<<"y of base class"<<endl;
        }

};
class derived: public base
{
public:
        void x(){
            cout<<"x of derived"<<endl;
        }
        void z(){
            cout<<"derived new";
        }

};
int main(){
    base a;
    derived b;
    b.y();
    b.x();
    b.z();
    return 0;
}
//2)HasA Relation
// we use objects of classes whose few features(which has no restriction) can be used