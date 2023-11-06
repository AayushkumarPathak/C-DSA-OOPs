#include<iostream>
using namespace std;
// MAX HEAP
class Heap{
    public:
    int arr[100];
    int size;

    Heap(){
        arr[0] = -1;
        size = 0;
    }

    void insert(int val){
        size = size + 1;
        int index = size;

        arr[size] = val;
        
        while(index > 1){
            int parent = index/2;
            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index = parent;
            }
            else{
                return;
            }
        }
    }

    void printHeap(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
    }

    void deleteNode(){
        if(size == 0){
            cout<<"Heap is empty!"<<endl;
            return;
        }
        //step1 put the last element in root || swap root and last node
        arr[1] = arr[size];
        //step2 delete the last node
        size--;
        //step3 put all the nodes in its correct position 
        int i = 1;
        while(i<size){
            int leftIdx = i*2;
            int rightIdx = i*2+1;

            if(leftIdx < size && arr[i]<arr[leftIdx]){
                swap(arr[i],arr[leftIdx]);
                i = leftIdx;
            }
            else if(rightIdx < size && arr[i]<arr[rightIdx]){
                swap(arr[i],arr[rightIdx]);
                i = rightIdx;   
            }
            else{
                return;
            }

        }
    }
    void heapSort(int arr[],int n){
        int size= n;
        while(size >1){
            //step1
            swap(arr[size],arr[1]);
            size--;

        }
    }

    void heapify(int arr[],int n,int i){
        int lg = i;
        int l = 2*i;
        int r = 2*i+1;

        if(l<=n && arr[lg]<arr[l]){
            lg = l;
        }
        if(r<=n && arr[lg]<arr[r]){
            lg = r;
        }

        if(lg !=i){
            swap(arr[lg],arr[i]);
            heapify(arr,n,lg);
        }
    }
};

int main(){
    Heap h;
    // 50 55 53 52
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);

    h.printHeap();

    return 0;

}