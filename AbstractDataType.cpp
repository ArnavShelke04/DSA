#include <iostream>
using namespace std;
// agar mere dost ko koi pc banana ho aur agar wo mujhse pooche toh main pc ka layout bata dunga as in graphic card,monitor,etc ... basically ek blueprint de dunga ... 
// abstract data type bhi aisi hi blueprint hoti hai which will tell us 1.minimal requirements(minimum requirements hote hai jo kisi bhi data se)          2.operations(we can add them later) ,jiska use karke hum ek data structure bana sakte hai 

// ARRAYS AS ABSTRACT DATA type
// minimal functionalities for arrays :
// 1.get(i)--to get an element
// 2.set(i,num)----to set an element
/* operations for arrays:
1.add
2.insert
3.remove ... and we can add many more*/
// Abstraction(hiding details) : focus on usage dont peek into details (you surely dont want to look up how inbuilt methods actually work)
// resizing is not an option in array ... if we make an int array (int takes 4 bytes of memory) and allocate its memory from 10 to 34 lets suppose then we can increase its size because we dont know who is using the memory after 34.you can copy the same array into a new updated array but you cant update the same array
// for address of i'th element in integer array :
// add(i)= starting address + 4*i
// arrays are pretty good for faster retrieval but it has issues when insertion and deletion is introduced
int main(){
    cout<<"hello world";
    return 0;
}