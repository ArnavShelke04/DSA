#include <iostream>
using namespace std;
/*Linear search - ek ek karke traverse karna and ruk jana once we find the element. Iske liye hume sorted array ki jarurat nahi hai
Binary search - Array should be sorted. neeche vala array as example lelo . agar hume 4 dhoodna hai toh fir hum teen 3 variables lenge low , high , mid =(first+last)/2 .agar mid decimal main aaye toh fir uska box function ya fir uska highest integer consider karna hai. ab index 0 is low and last index is high to start with .fir 
hum mid calculate karenge ...agar mid is equal to the element then hamari search khatam ho gayi... agar mid is greater that our element then hum array ke first half ka use karenge that is hum likhenge last=mid.
agar mid is less than our element then hum array ka second half use karenge that is first=mid. iss technique se hum har baar array ko half kar rahe hai jiske vajah se humara array chhota ho raha hai until we converge to our element. Notes main time complexity likhi hai iski*/
//linear search
int linearSearch(int arr[],int size,int element){
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}
int binarySearch(int arr[],int size,int element){
    int mid,high,low;
    low=0;
    high=size-1;
    mid=(low+high)/2;//as humne mid ko int rakha hai toh hume technically mid bhi greatest integer milega
    while(low<=high){
        if(arr[mid]==element){
            return mid;
        }
        if(arr[mid]<element){
            low=mid+1;//we can play more smart cuz we know that mid is not the element so we can exclude it
        }
        else{
            high=mid-1;
        }
    }
    // keep searching until low and high converges
    return -1;

}
int main(){
    int arr[20]={3,4,6,8,15};
    int size= sizeof(arr)/sizeof(int);
    int searchIndex=linearSearch(arr,size,4);
    cout<<"element was found at index : "<<searchIndex<<endl;
    int searchIndex1=binarySearch(arr,size,4);
    cout<<"element was found at index : "<<searchIndex1<<endl;
    return 0;
}