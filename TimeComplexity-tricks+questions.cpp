#include <iostream>
using namespace std;
int main(){
    cout<<"hello world";
    return 0;
    int n;
    int m;
    // assume this declaration takes time k1 
    for(int i=0;i<n;i++){
        m=i;
        m++;
        // i wrote some gibberish code for understanding
    }
    // for example if one step of this loop takes k time and as we see the loop code doesnt have n(input) , then the total time for the loop would be k*n ... it wont be perfectly equal in a real case because it takes some time to update i but we ignore those effects
    // resultantly the total time for our code will be T= kn + k1
    // trick1: when we talk about n we talk about big inputs so we can safely ignore non dominant terms that is k1
    // trick2: drop the constant terms
    // trick3: break the code into fragments
    for(int j=0;j<n;j++){
        m=i+1;
        m--;
    }
    // consider the time for each step to be k3 , again the time will be k3*n and the general mistake here is that when there are two loops we wont get a term of n^2 but two terms of n. we were able to figure this out because we divided the code into various parts
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            m=i+1;
            m--;
        }
    }
    // for this nested loop(consider time for a step of inner code to be k4) when i=0, time will be k4*n ,for i=1- time will be k4*n.... similarly it will be like that for n times and then the total time would be k4*n*n that is k4*n^2.par agar andar n ka use kiya jaaye toh fir change ho jayegi complexity
    // try solving the questions
}