#include<iostream>
#include<string.h>
using namespace std;

void printPerm(string str,string perm){
    if(str.length() == 0){
        cout<<perm<<endl;
        return;
    }
    for(int i=0;i<str.length();i++){
        char currChar = str.at(i);
        string newStr = str.substr(0,i) + str.substr(i+1);
        printPerm(newStr,perm+currChar);
    }
}

int main()
{
    string str = "abc";
    string perm = "";
    // int idx = 0;

    printPerm(str,perm);

    return 0;


}