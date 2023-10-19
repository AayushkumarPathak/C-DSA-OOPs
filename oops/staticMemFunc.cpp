#include<iostream>
#include<conio.h>
using namespace std;

class Dummy{
    int x;
    static int y;

    public:
    void getData(int a){
        x = a;
        y = y+1;

    }
    void putData(){
        cout<<"x: "<<x<<"\ty: "<<y<<endl;
    }

    static void myfunc(){
        //cout<<x;      // error
        cout<<"y: "<<y<<endl;

    }

};

int Dummy::y;

int main(){
    Dummy d1;
    d1.getData(10);
    d1.putData();
    Dummy::myfunc();
    return 0;

}