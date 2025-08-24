#include <iostream>
using namespace std;
class myArray{
int total_size;
int used_size;
int *ptr;
};
void createArray(myArray *a,int tSize,int uSize){
    (*a).total_size=tSize;
    (*a).used_size=uSize;
    int* ptr = new int[tSize];
}
/*What 'new' does
1.Allocates memory on the heap (dynamic memory).
2.Calls the constructor (if it’s for an object).
3.Returns a pointer to the allocated memory.*/
int main(){
    cout<<"hello world";
    myArray marks;
    createArray(&marks,100,20);
    return 0;
}