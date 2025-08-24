#include <iostream>
using namespace std;
class myArray{
    int total_size;
    int used_size;
    int *ptr;
    //memory block ke start ko point karega jo heap ke andar se humne request ki thi
    public:
    myArray(int tSize,int uSize){
        total_size=tSize;
        used_size=uSize;
        ptr = new int[tSize];
        // what we did was create a memory block of size tSize in the heap and then we gave the reference of the starting memory to ptr and this is similar to how we create object in java and give reference the only difference is that java clears out the garbage from this memory and for c++ we need to do it on our own
        // stack memory after function destroy ho jati hai isiliye hum heap vali use karenge
    }
    void setValue(){
    for(int i=0; i<used_size;i++){
            cout<<"enter element "<< i;
            cin>>ptr[i];
            cout<<endl;
            
        }
    }
    void show(){
        for(int i=0; i<used_size;i++){
            cout<<"element "<<i<<" ";
            cout<<ptr[i];
        }
    }

};
/*What 'new' does
1.Allocates memory on the heap (dynamic memory).
2.Calls the constructor (if it’s for an object).
3.Returns a pointer to the allocated memory.*/
int main(){
    cout<<"hello world";
    myArray marks(10,2);
    marks.setValue();
    marks.show();
    return 0;
}
// this thing below is just for my understanding and not related to the course 
/*int* arr = new int[tSize];
You’re saying:
→ “Give me a block of memory on the heap big enough to hold tSize integers.”

The type of memory: a contiguous array of int.

That’s it — no extra behavior, no special functions attached. Just raw integers in memory.

🔹 In Java when you write:

Scanner sc = new Scanner(System.in);
Here’s what happens step by step:

new Scanner(...) → Allocates memory on the heap for a Scanner object.

That Scanner object isn’t just data (like ints) — it has fields + methods.

Fields: internal variables (like a buffer, current position, input stream reference).

Methods: functions to read integers, strings, tokens, etc.

(System.in) is passed to the Scanner’s constructor, which sets up the Scanner to read from standard input.

So unlike int[tSize] (just a block of raw memory for numbers),
new Scanner(System.in) creates a full-fledged object — memory that holds not just data but also the “machinery” (methods + state) that knows how to read from input.*/

