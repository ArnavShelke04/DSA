#include <iostream>
using namespace std;
// 3 asymptotic notation
// 1.big oh-if 0<=f(n)<=c*g(n) for n>=n0 then f(n) is O(g(n))
// for eg - f(n)=n^3+1 is O(n^4) for c=1,n0=2 but we always use the minimum wala case and say that this equation is O(n^3)
// 2.big omega-if 0<=c*g(n)<=f(n) for n>=n0 then f(n) is bigOmega(g(n))
// for eg - f(n)=n^3+1 is bigOmega(1) for c=1,n0=1
// 3.big theta-if 0<=c1*g(n)<=f(n)<=c2*g(n) for n>=n0 then f(n) is bigTheta(g(n)) that is it should be both bigO and bigOmega for it to be bigTheta and bigTheta gives the best picture of f(n) 
int main(){
    cout<<"hello world";
    return 0;
}