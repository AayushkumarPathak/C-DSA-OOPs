#include<iostream>
using namespace std;

class Pen{
    private:
    int year;

    public:
    int price;
    string type;
    

    void printInfo(){
        cout<<"Price is: "<<price<<endl;
        cout<<"Type is: "<<type<<endl;
    }
    void setYear(int yr){
        year = yr;
    }
    void getYear(){
        cout<<"Year is: "<<year<<endl;

    }
};

int main()
{
    Pen p1;
    p1.price = 10;
    p1.type = "gel";

    // cout<<"price is: "<<p1.price<<endl;
    // cout<<"Type is: "<<p1.type;
    p1.setYear(2022);
    p1.getYear();

    p1.printInfo();

}