#include<iostream>
using namespace std;
// kuch array main se delete karne ke baad hum uss khali jagah ko aise hi nahi chhod sakte cuz array contains data at contiguous memory blocks and a void in an array is unacceptable so we shift the elements 
void display(int arr[],int n){
    // Traversal
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int indexDeletion(int arr[],int size,int capacity,int index){
    if(index>=size){
        cout<<"error";
        return -1;
    }
    for(int i=index;i<size-1;i++){
        arr[i]=arr[i+1];
    }
    // index se size-2 tak run hona chahiye ... use an example if confused about the limits
    return 1;
}
int main(){
    int arr[100]={1,2,4,67,39,22};
    int size=6;
    int element=45;
    int index=3;
    display(arr,size);
    indexDeletion(arr,size,100,index);
    size-=1;
    display(arr,size);
    return 0;
}