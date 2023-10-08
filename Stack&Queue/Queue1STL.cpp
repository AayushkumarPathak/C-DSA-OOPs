#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> qu;

    qu.push(10);
    qu.push(12);
    qu.push(13);
    qu.push(15);

    cout<<qu.front()<<endl; // viewing front element
    cout<<qu.empty()<<endl;


    qu.emplace(17);
    while(!qu.empty()){
        cout<<qu.front()<<"<-";
        qu.pop();
    }
    cout<<endl;


    queue<int>q2;

    q2.push(22);
    q2.push(23);
    q2.push(24);
    qu.swap(q2);
    cout<<"After swap: ";
    while(!qu.empty()){
        cout<<qu.front()<<"<-";
        qu.pop();
    }

    cout<<"After swap: ";
    while(!q2.empty()){
        cout<<q2.front()<<"<-";
        q2.pop();
    }
    
    cout<<endl;

    return 0;
}