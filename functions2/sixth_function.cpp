#include<iostream>
#include<math.h>
using namespace std;
bool isPrime(int n){
    bool result=false;
    if(n==0 && n==1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        /* code */
        if (n%i==0)
        {
            return false;
        }
        
    }
    return true;
}
void printTillN(int n){
    for (int i = 2; i < n; i++)
    {
        if(isPrime(i))
            cout<<i<<endl;
    }
    
}
int main(){
    printTillN(10);

    return 0;
}