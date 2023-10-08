#include<iostream>
#include<stack>
using namespace std;

void pushAtBottom(int data,stack<int> &s){
    if(s.empty()){
        s.push(data);
        return;
    }
    int top = s.top();
    s.pop();
    pushAtBottom(data,s);
    s.push(top);
}

int main(){
    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);

    pushAtBottom(4,st);

    while(!st.empty()){
        cout<<st.top()<<"<-";
        st.pop();
    }
    cout<<endl;
    return 0;
}
