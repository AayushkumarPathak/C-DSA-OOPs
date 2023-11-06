#include<iostream>
using namespace std;

class A{
    protected:
    int a;

    public:
    void input(){
        cout<<"Enter A: ";
        cin>>a;
    }
};

class B{
    protected:
    int b;

    public:
    void input(){
        cout<<"Enter B: ";
        cin>>b;

    }
};

class C:public A,public B{
    private:
    int c;

    public:
    void getData(){
        cout<<"Enter c: ";
        cin>>c;
        //ambigiuty solution here! accessing two name same function
        A::input();
        B::input();

    }

    void putData(){
        cout<<"C: "<<c<<endl;
        cout<<"B: "<<b<<endl;
        cout<<"A: "<<a<<endl;
    }
};

int main(){
    C obj;
    obj.getData();
    obj.putData();
    return 0;
}