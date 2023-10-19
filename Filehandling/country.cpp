#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream wr;
    wr.open("country.txt");
    wr<<"India\n";
    wr<<"Canada\n";
    wr<<"America\n";

    wr.close();

    wr.open("capital.txt");
    wr<<"Delhi\n";
    wr<<"Toronto\n";
    wr<<"London\n";

    wr.close();

    // ifstream rd;
    // char ch[20];
    // rd.open("country.txt");
    // rd>>ch;
    // cout<<"read success."<<endl;
    // cout<<ch;
    // rd.close();

    // const int n = 100;
    // char s[n];
    // ifstream rd;
    // rd.open("country");

    // while(rd){
    //     rd.getline(s,n);
    //     cout<<"Your data country\n";
    //     cout<<s<<endl;
    // }
    // rd.close();

    // rd.open("capital");
    // while(rd){
    //     rd.getline(s,n);
    //     cout<<"Your data capital\n";
    //     cout<<s<<endl;;
    // }
    // rd.close();
    //**************
    char r[20];
    ofstream w;
    ifstream r1;
    w.open("country",ios::app);
    w<<"Russia";
    // w.close();

    r1.open("country",ios::in);
    r1.getline(r,30);
    cout<<r<<endl;
    // rd.close();
    

    return 0;
}