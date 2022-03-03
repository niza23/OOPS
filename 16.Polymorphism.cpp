#include<iostream>
#include<string>
using namespace std;
class basiccar{
    public:
    void body(){
        cout<<"body of basic car"<<endl;
    }

};
class advcar: public basiccar{
    public:
    void engine(){
        cout<<"this is the engine of adv car";
    }

};
int main()
{
    basiccar *ptr;
    ptr=new advcar();
    ptr -> body();
    // ptr -> engine(); -->>this will give an error bcos 
    return 0;
}
