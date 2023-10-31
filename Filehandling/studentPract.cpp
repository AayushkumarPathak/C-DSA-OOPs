#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream wr("student.txt");
    string name;
    int roll;
    string branch;

    cin>>name;
    cin>>roll;
    cin>>branch;
    if(!wr.is_open()){
        cout<<"Unable to open file."<<endl;
    }

    wr<<name<<endl;
    wr<<roll<<endl;
    wr<<branch<<endl;

    wr.close();

    ifstream rd;
    rd.open("student.txt");
    if(!rd.is_open()){
        cout<<"unable to open file.";
    }
    string n;
    int r;
    string br;

    rd>>n;
    rd>>r;
    rd>>br;

    cout<<n<<" "<<r<<" "<<br<<endl;
    if(!rd.eof()){
        cout<<"EOF reached"<<endl;
    }
    rd.close();


    return 0;
}