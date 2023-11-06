#include<iostream>
using namespace std;
// multiple inheritance
class sal{
    protected:
    int salary;

    public:
    void getdata(){
        cout<<"Enter salary: ";
        cin>>salary;
    }
};

class Bonus{
    protected:
    int bns;

    public:
    void input(){
        cout<<"Enter bonus: ";
        cin>>bns;
    }
};

class cal:public sal, public Bonus{
    protected:
    int sum;

    public:
    void total(){
        sum = salary+bns;
        cout<<"total salary is: "<<sum<<endl;
    }
};

int main(){
    cal e1;
    e1.getdata();
    e1.input();
    e1.total();
    return 0;
}