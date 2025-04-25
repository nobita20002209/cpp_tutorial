#include<iostream>
using namespace std;
// SUM OF DIGITS
int sumOfDigits(int n){
    int result=0;
    while (n!=0)
    {
        result+=n%10;
        n/=10;
    }
    return result;
}
int main(){
       
    cout<<"sum is = "<<sumOfDigits(54);

    return 0;
}