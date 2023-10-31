#include<iostream>
#include<fstream>
using namespace std;

class Employee{
    public:
    string name;
    int id;
    string dept;

    friend ofstream & operator<<(ofstream &wr,Employee &e1);
    friend ifstream & operator>>(ifstream &rd,Employee &e1);

};
ifstream & operator>>(ifstream &rd,Employee &e1){
     rd>>e1.name>>e1.id>>e1.dept;
     return rd;
}



ofstream & operator<<(ofstream &wr,Employee &e1){
    wr<<e1.name<<endl;
    wr<<e1.id<<endl;
    wr<<e1.dept<<endl;

    return wr;
}

int main(){
    Employee e1;
    // e1.name = "Akash";
    // e1.id = 3;
    // e1.dept = "Manager";

    // Employee e2;
    // e2.name="Aayush";e2.id=1;e2.dept="SoftwareEngg.";

    // ofstream wr("Emplyee.txt",ios::app);

    // wr<<e1;
    // // wr<<e2;


    // wr.close();

    ifstream rd("Emplyee.txt");
    rd>>e1;
    cout<<"Name: "<<e1.name<<endl; 
    cout<<"ID: "<<e1.id<<endl;
    cout<<"Department: "<<e1.dept<<endl;
    rd.close();

    return 0;
}
