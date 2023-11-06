#include<iostream>
using namespace std;
//single level inheritance
class abc{
    protected:
    int x;

    public:
    void getdata(){
        cout<<"Enter x: ";
        cin>>x;
    }

};

class xyz:public abc{
    private:
    int y;

    public:
    void input(){
        cout<<"Enter y: ";
        cin>>y;

    }
    void putdata(){
        cout<<"Sum of x and y: "<<x+y<<endl;
    }
};

int main(){
    xyz obj1;

    obj1.getdata();
    obj1.input();
    obj1.putdata();
}