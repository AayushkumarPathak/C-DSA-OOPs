#include<iostream>
using namespace std;

class A{
    protected:
    int a;

    public:
    A(int x){
        a = x;
    }
    void putA(){
        cout<<"A: "<<a<<endl;
    }
};

class B{
    protected:
    int b;

    public:
    B(int y){
        b = y;
    }
    void putB(){
        cout<<"B: "<<b<<endl;
    }
};

class C:public A,public B{
    protected:
    int c;
    
    public:
    C(int p,int q,int r):A(p),B(q){
        c = r;
    }
    void putC(){
        cout<<"C: "<<c<<endl;
    }
};

int main(){
    //    a  b  c
    C obj(10,20,30);
    obj.putA();
    obj.putB();
    obj.putC();
    return 0;
}