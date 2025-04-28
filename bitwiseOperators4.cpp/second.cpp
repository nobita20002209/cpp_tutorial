#include<iostream>
#include<string>
using namespace std;
// WAF to reverese an integer n
int reverseNumber(int n){
    int result=0;
    while (n!=0)
    {
        int first=n%10;
        result=result*10+first;
        n/=10;

    }
    return result;
}
int main(){
       
    cout<<"The binary is ="<<reverseNumber(1234);

    return 0;
}