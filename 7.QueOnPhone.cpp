#include<iostream>
#include<string>
using namespace std;
class phone
{
    public:
    string name;
int ram,battery;
string processor;

phone(string a="Null",string x="Null",int y=0, int z=0) //parametrized constructor and overloading of the constructor
{
    name=a;
    processor=x;
    ram=y;
    battery=z;
}
//copy constructor
phone(phone &mob) //copy constructor
{
    name=mob.name;
    processor=mob.processor;
    ram=mob.ram;
    battery=mob.battery;

}
void get();
};
//defining member funtion outside the class
void phone::get()
{
    cout<<"name"<<name<<endl;
    cout<<"processor"<<processor<<endl;
    cout<<"ram"<<ram<<endl;
    cout<<"battery"<<battery<<endl;
}
int main()
{
    phone obj;
    phone obj2("Samsung","snapdragon",6,4000);
    phone obj3(obj2);
    obj.get();
    obj2.get();
    obj3.get();

return 0;
}
