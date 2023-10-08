#include<iostream>
#include<string.h>
using namespace std;
int first = 0;
int last = 0;

void occu(string str,int idx,char ele){
    if(idx == str.length()-1){
        
        cout<<"First Occurrence is: "<<first<<endl;
        cout<<"Last Occurence is: "<<last;
        return;
    }
    char currChar = str.at(idx);
    if(currChar == ele){
        if(first == -1){
            first = idx;
        }
        else{
            last = idx;
        }
    }
    occu(str,idx+1,ele);
}


int main()
{
    string str = "abaacdaefaah";
    char ele = 'a';
    int len = str.length();

    occu(str,0,ele);

    return 0;
}