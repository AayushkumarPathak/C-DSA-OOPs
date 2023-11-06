#include<iostream>
using namespace std;

class Student{
    protected:
    int regno;
    string name;
    string contact;
    string fname;
    string mname;
    string address;
    string program;
    string course;

    public:
    void getInfo(){
        cout<<"Enter Register No. : ";
        cin>>regno;

        cout<<"Enter Name: ";
        getline(cin,name);

        cout<<"Enter contact No. :";
        getline(cin,contact);
    }
    void putData(){
        cout<<"Your regno"<<regno<<endl;
    }

};

int main(){
    Student s1;
    s1.getInfo();
    s1.putData();
}