#include<iostream>
using namespace std;

class A{
    public:
    void display(){
        cout<<"Base class"<<endl;
    }
};

class B:public A{
    public:
    void display(){
        cout<<"Derived class"<<endl;
    }
};

int main(){
    B obj;
    obj.display();
    obj.A::display();
    //to access the display fun in base class two methods
    // 1st under defination of derived class add A::display();
    // 2nd call at main function using obj.A::display();
    return 0;
}