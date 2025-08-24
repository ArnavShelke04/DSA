#include<iostream>
using namespace std;
// Read notes 
// for algo1 if we suppose the time required to compare 1 element is k then for the best case scenario (finding element at first box) the time required will be constant and will be k ... thus the time complexity will be O(1)
// for the worst case(finding element at last box) the time required will be n*k and thus it will depend on the size of array linearly and the complexity will be O(n) we can write T= k*n and the highest order is n thus O(n)
// Avgcase=O((sum of runtimes of all cases)/(total number of cases))
// the cases would be like 
// finding at first box,finding at second box,finding at third box.....finding at nth box,not finding the element
// thus the number of cases will be n+1 for an array of size n
// average T=(k+2k+3k+....+nk+nk(for no element))/(n+1)
// avg T=k(n^2+n +2n)/(2n+2)
// ignore 2n in front of n^2+n 
// avg T=kn/2 avg case complexity=O(n)
// we will do the same analysis for algo2 and read about log(n) from the notes it is very important
// our best case will be O(1) for majority of times but what defines our algo is our worst case
int main(){
    cout<<"za warudo";
    return 0;
}