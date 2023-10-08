#include<iostream>
using namespace std;

class School
{
    private:
    int addhNo;

    public:
    string name;

    void insert(int addhNo,string name);
    
    void display(){
        cout<<"Adhar number:"<<addhNo<<endl;
        cout<<"Name"<<name<<endl;
    }
};
void School :: insert(int uid,string name){
    addhNo = uid;
    name = name;

}

int main()
{
    School s1;
    s1.insert(12,"Abhi");
    s1.display();

    return 0;
}