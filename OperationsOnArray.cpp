#include <iostream>
using namespace std;
// total_size is capacity , used_size is its size
// Traversal - har ek element of the array ko ek baar visit karna (can be done with a for loop)
// Insertion - consider the array below .. suppose we need to insert 33 at index 2 ... but where will 4 go ? after insertion we need to change the used_size as well
// There are two cases - 
// 1.maintain the order - shift everyone ahead and then put 33 at index 2 (best case we will insert after the last filled index and the time complexity will be O(1) and the worst case we will insert at index 0 and time complexity will be O(n))
// 2.dont maintain order - put the element at index 2 at end and insert 33 at index 2
// Deletion - array main se element hata dete hai. after deletion we need to change the used_size as well. Deletion ke 2 case
// 1. maintain order - insertion ke case 1 ka ulta hai.
// time complexity - O(1) for best case (last element delete ) O(n) for worst case (1st element delete)
// 2.dont maintain order - delete the element from index and bring the last element to its place
// Searching - 2 types of searching linear search and binary search and we will understand that better from code

int main(){
    int arr[]={2,3,4,5,6};
    cout<<"hello world";
    return 0;
}