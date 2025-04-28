#include<iostream>
#include<string>
using namespace std;
// IS POWER OF 2
bool isPowerOfTwo(int n){
    return (((n & (n-1))==0)&& n>0);
}
int main(){
       
    cout<<"The binary is ="<<isPowerOfTwo(2);

    return 0;
}