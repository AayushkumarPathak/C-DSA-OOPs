#include<iostream>
using namespace std;

int count = 0;

class demo{
    public:
    demo(){
        count++;
        cout<<"No of obj created: "<<count<<endl;

    }
    ~demo(){
        count--;
        cout<<"No. of obj remain after destroying: "<<count<<endl;
    }
};

int main(){
    demo aa,bb,cc;
    {
        demo dd;
    }
    return 0; 
}