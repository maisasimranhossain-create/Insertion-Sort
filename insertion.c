#include <stdio.h>

void insertionsort(int arr[],int size){
    for(int step=1;step<size;step++){
        int key=arr[step];
        int j=step-1;
        while(j>=0 && key<arr[j]){
            arr[j+1]=arr[j];
            --j;
        }
        arr[j+1]=key;
    }
}
int main(){
    int data[]={6,4,7,8,1,9,5};
    int size=sizeof(data)/sizeof(data[0]);
    insertionsort(data,size);
    printf("Sorted Array:\n");
    for(int i=0;i<size;i++){
        printf("%d,",data[i]);
    }
}