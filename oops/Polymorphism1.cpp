#include<iostream>
using namespace std;

class LPU{

    public:
    void fun(){
        cout<<"Function with no argument."<<endl;
    }
    void fun(int x){
        cout<<"Function with int datatype argument "<<x<<endl;
    }
    void fun(double y){
        cout<<"Function with double datatype argument "<<y<<endl;
    }
};

int main(){
    LPU obj;
    obj.fun();
    obj.fun(2);
    obj.fun(7.7);
    return 0;
}