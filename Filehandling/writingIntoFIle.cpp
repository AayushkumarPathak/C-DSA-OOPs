#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream outfile("my.txt");
    // if file not exixting then it create the file itself
    // if file existing then it overwrite the file erase previous data
    //to append the data ios::app and ios::trunc

    outfile<<"Hello"<<endl;
    outfile<<25<<endl;

    outfile.close();



    return 0;
}