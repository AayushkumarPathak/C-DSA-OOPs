#include <iostream>
using namespace std;

class Demo
{
    int a, b;
    
    public:
    void getData();
    void putData();

};
void Demo::getData(){
    cin>>a;
    cin>>b;
}
void Demo::putData(){
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
}


int main(){
    Demo obj1;

    obj1.getData();
    obj1.putData();

}