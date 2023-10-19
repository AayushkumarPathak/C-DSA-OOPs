#include <iostream>
using namespace std;

class Demo
{
    int a, b;
    static int x;
    public:
    void getData(){
        cin>>a;
        cin>>b;
        cin>>x;
    }
    void putData(){
        cout<<"a: "<<a<<endl;
        cout<<"b: "<<b<<endl;
        cout<<"x: "<<x<<endl;

    }

};
int Demo::x;

int main(){
    Demo obj1, obj2;

    obj1.getData();
    obj1.putData();

    obj2.getData();
    obj2.putData();

}