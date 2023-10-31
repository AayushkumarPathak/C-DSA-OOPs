#include <iostream>
using namespace std;

int length(char name[]){
    int cnt = 0;
    for(int i=0;name[i]!='\0';i++){
        cnt++;
    }
    return cnt;
}
void reverse(char name[],int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}

int main(){
    char name[20];

    cout<<"Enter your name: ";
    cin>>name;
    // name[2] = '\0';

    cout<<"Your name is "<<name<<endl;
    int len = length(name);
    cout<<"Length of your name is: "<<len<<endl;

    reverse(name,len);

    cout<<"Your name in reverse order "<<name<<endl;


}