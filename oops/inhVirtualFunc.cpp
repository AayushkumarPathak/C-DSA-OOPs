//virtual function
#include<iostream>
using namespace std;

class A{
    public:
    virtual void show(){
        cout<<"Base class\n";
    }
};

class B:public A{
    public:
    void show(){
        cout<<"Derived class\n";
    }
};

int main(){
    B aa;
    aa.A::show(); // Early binding
    // A* bptr;
    // A bobj;
    // B dobj;
    // bptr = &bobj;
    // bptr = &dobj;
    // bptr->show();
/*  Late binding ie. at Runtime   */
    A *bptr;
    A bobj;
    bptr = &bobj;
    bptr->show();

    B *dptr;
    B dobj;
    dptr = &dobj;
    dptr->show();
    return 0;
}