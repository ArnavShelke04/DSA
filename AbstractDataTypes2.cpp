#include <iostream>
using namespace std;
// ADTs- set of values + set of operations
// for eg I define an adt named myArray
// myArray- total_size,used_size,base_address (all the values) + max(),get(i),set(i,num),add(arr) (all the operations)
// two to make address for array that is 
// 1.memory from stack
// 2.make a ptr and access memory from heap
// normally we make an array much bigger than we actually need , this way we can update it whenever we want and store data in contiguous memory locations which will make accessing data more easy
struct myArray{
    int total_size;
    // memory to be reserved
    int used_size;
    // memory to be used
};
// anything below this wasnt taught it was written just to recall
// struct reserves space according to total number of variables.... for example in the above struct , the total space reserved will be for 2 ints that is 4+4=8 bytes
// Union reserves space according to the largest data type .... in the example below the space reserved will be according to the character array .
union MyUnion {
    int x;       // 4 bytes
    float y;     // 4 bytes
    char z[4];   // 4 bytes
};

int main() {
    MyUnion u;
    u.x = 65;          // store int
    cout << u.x << "\n";  // prints 65

    u.y = 65.0f;       // now store float in same space
    cout << u.y << "\n";  // prints 65.0
    cout << u.x << "\n";  // corrupted, since memory is reinterpreted

    u.z[0] = 'A';      // now treat same 4 bytes as char array
    cout << u.z[0] << "\n";  // prints 'A'
}
// union rewrites data in the same memory ... by this i mean if i save u.x and after then i save u.y then the value of u.x which was in our memory space will get replaced by u.y 