#include<iostream>
using namespace std;
void display(int arr[],int n){
    // Traversal
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int indexInsertion(int arr[],int size,int element,int capacity,int index){
    if(size>=capacity){
        return -1;
    }
    else if(index>=capacity){
        cout<<"insertion failed!";
        return -1;
    }

    // self explanatory cuz used_size cannot be greater than total_size
    for(int i=size-1;i>=index;i--){
        arr[i+1]=arr[i];
    }
    // this loop is used for shifting the element in the index we want and those ahead of that one step ahead
    arr[index]=element;
    return 1;
}
int main(){
    int arr[100]={1,2,4,67,39,22};
    int size=6;
    int element=45;
    int index=3;//where we want the element to be
    display(arr,size);
    indexInsertion(arr,size,element,100,index);
    size+=1;
    // we need to increase size as well as an element is getting inserted and it would be better if we can put the increment in the function
    display(arr,size);
    return 0;
}