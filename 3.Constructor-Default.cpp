#include<iostream>
#include<string>
using namespace std;
class person{
    private:
    int age;
    string name;
    float height;


    public:
    same name as class and no return type
    person() //no parameter
    { //default values
        age=0; 
        name="Null";
        height=0.0f;
    }
    // if no default constructor is defined by the user, compiler add the default constrcutor by its own.. this default constrcutor just allocate the memory and contains the garbage values
    void get()
    {
        cout<<"name is:"<<name<<endl;
        cout<<"age is:"<<age<<endl;
        cout<<"height is"<<height<<endl;
    }
    
    

};
int main()
{
    
    person obj;
    obj.get();
   
    return 0;
}
