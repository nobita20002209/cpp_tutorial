#include<iostream>
#include<math.h>
using namespace std;
bool isPrime(int n){
    bool result=false;
    if(n==0 && n==1)
        return false;
    for (int i = 2; i < sqrt(n); i++)
    {
        /* code */
        if (n%i==0)
        {
            return false;
        }
        
    }
    return true;
}
int main(){
    if(isPrime(5))
        cout<<"the number  is prime";
    else
        cout<<"the number is not prime";

    return 0;
}