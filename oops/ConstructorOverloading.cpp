#include<iostream>
using namespace std;

class Demo{
    int a;
    public:
    Demo(){ //default const
        a = 11;
    }
    Demo(int x){ // parameterized const
        a = x;
    }
    Demo(Demo &z){ //copy const
        a = z.a;
    }
    void put(){
        cout<<"a: "<<a<<endl;
    }
};

int main(){
    Demo aa;
    Demo bb(20);
    Demo cc(aa);

    aa.put();
    bb.put();
    cc.put();
}
