#include<iostream>
#include<fstream>
using namespace std;

int main(){
    //writing file ********1
    // ofstream put("result.txt");
    // put<<"Hello world";
    // put.close();
    // cout<<"Data saved";
    // //reading file
    // char s[30];
    // ifstream get("result.txt");
    // get>>s;
    // get.close();
    // cout<<"\nData reading"<<endl;
    // cout<<s;

    //one program read write ********2
    char ch[30];
    ofstream wr("result");
    wr<<"Aayush";
    wr.close();
    cout<<"Data saved."<<endl;

    ifstream rd("result");
    rd>>ch;
    cout<<ch;
    rd.close();

    return 0;


} 