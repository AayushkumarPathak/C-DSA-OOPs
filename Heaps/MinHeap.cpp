#include<iostream>
using namespace std;

class MinHeap{
    public:
    int arr[100];
    int size;

    MinHeap(){
        arr[0] = -1;
        size = 0;
    }

    void insert(int val){
        size = size+1;
        int idx = size;
        arr[size] = val;

        while(idx>1){
            int parent = idx/2;
            if(arr[parent]>arr[idx]){
                swap(arr[parent],arr[idx]);
                idx = parent;
            }
            else{
                return;
            }

        }

    }
    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    MinHeap mh;

    mh.insert(60);
    mh.insert(40);
    mh.insert(50);
    mh.insert(20);
    mh.insert(30);

    mh.print();
}