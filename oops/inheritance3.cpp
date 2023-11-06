//multi level inheritance

#include<iostream>
using namespace std;

class student{
    private:
    int roll;
    string name;

    public:
    void getData(){
        cout<<"Enter roll: ";
        cin>>roll;

        cout<<"Enter name: ";
        cin>>name;
    }
    void putData(){
        cout<<"Roll: "<<roll<<endl;
        cout<<"Name: "<<name<<endl;
    }

};

class Marks:public student{
    protected:
    int cpp,dsa;

    public:
    void getMarks(){
        cout<<"Enter cpp marks";
        cin>>cpp;
        cout<<"Enter dsa marks";
        cin>>dsa;
    }
    void putMarks(){
        cout<<"cpp marks: "<<cpp<<endl;
        cout<<"dsa marks: "<<dsa<<endl;
    }

};

class Total:public Marks{
    private:
    int ca;

    public:
    void getCA(){
        cout<<"Enter CA marks: ";
        cin>>ca;
    }
    void putTotal(){
        putData();
        putMarks();
        cout<<"CA marks: "<<ca<<endl;
        cout<<"Total marks: "<<cpp+dsa+ca;
    }
};

int main(){
    Total t;
    t.getData();
    t.getMarks();
    t.getCA();
    t.putTotal();
    return 0;
}