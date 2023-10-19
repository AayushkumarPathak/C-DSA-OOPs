#include<iostream>
using namespace std;

class Pen{
    private:
    int cost;

    public:
    //default constructor
    Pen(){
        cost = 100;
        cout<<"Cost is: "<<cost<<endl;
    }
};
class student{
    private:
    int roll;
    string name;
    int standard;

    public:
    //parameterized constructor
    student(int r,string nam){
        roll = r;
        name = nam;
        standard = standard;
    }
    
    void put();
};
void student::put(){
    cout<<"Roll: "<<roll<<endl;
    cout<<"Name: "<<name<<endl;
    
}

class  numk{
    private:
    int x;
    public:
    numk(){
        x = 11;
    }
    numk(numk &n){
        x = n.x;
    }
    void print(){
        cout<<"X: "<<x<<endl;
    }
};



int main(){
    // Pen p1;
    // Pen p2;

    student s1(1,"Aayush");
    student s2(3,"Akash");

    s1.put();
    s2.put();

    numk n1;
    numk n2(n1);
    n1.print();
    n2.print();



    return 0;
}