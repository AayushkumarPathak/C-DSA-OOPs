#include <stdio.h>
int main(){
    int list1[5];
    int list2[5];
    int list3[5];
    int i;
    for(i=0;i<5;i++){
        
        list1[i]=i+5;
    }
    for(i=0;i<5;i++){
        
        list2[i]=i+5;

    }
    for(i=0;i<5;i++){
        list3[i]=list1[i]+list2[i];
        

    }
    for(i=0;i<5;i++){
        printf("%d ",list3);
    }
}