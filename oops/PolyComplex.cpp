#include<iostream>
using namespace std;

class complex{
    private:
    int r , i;

    public:
    complex(int real = 0,int img = 0){
        r = real;
        i = img;
    }
    complex operator + (complex const &obj){
        complex ans;
        ans.i = i + obj.i;
        ans.r = r + obj.r;
        return ans;
    }

    void display(){
        cout<<r<<"+ i"<<i<<endl;
    }
};

int main(){
    complex c1(12,7);
    complex c2(6,7);

    complex c3 = c1 + c2;
    c3.display();
}