#include<iostream>
#include<string.h>
using namespace std;

void reverse(string str, int idx){
    if(idx==0){
        cout<<str.at(idx);
        return;
    }
    cout<<str.at(idx);
    reverse(str,idx-1);

}

int main()
{
    string str = "abcd";
    int len = str.length();

    reverse(str,len-1);
    
    return 0;

}