#include<iostream>
#include<string.h>
using namespace std;

void moveAll(string str,string newStr,int idx,int count){
    //base case
    if(idx == str.length()){
        for(int i=0;i<count;i++){
            newStr += 'x';
        }
        cout<<"New string is:"<<newStr<<endl;
        return;

    }
    //
    char currChar = str.at(idx);
    if(currChar == 'x'){
        count++;
        moveAll(str,newStr,idx+1,count);
    }
    else{
        newStr += currChar;
        moveAll(str,newStr,idx+1,count);
    }

}

int main()
{
    string str = "axbcxxd";
    string newStr = "";
    int idx = 0;
    int count = 0;

    moveAll(str,newStr,idx,count);

}