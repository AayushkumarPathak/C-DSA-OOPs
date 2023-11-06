#include<iostream>
using namespace std;

class A{
    public:
    A(){
        cout<<"constructor Inside Base class\n ";
    }
    ~A(){
        cout<<"Destructor inside base class\n ";
    }
};

class B{
    public:
    B(){
        cout<<"constructor Inside derived class\n ";
    }
    ~B(){
        cout<<"Destructor inside derived class\n ";
    }
    
};

class C:public B{
    public:
    C(){
        cout<<"\n\nconstructor Inside child class\n ";
    }
    ~C(){

        cout<<"Destructor inside child class\n ";
    }
};

int main(){
    A aa;
    B bb;
    C cc;
}