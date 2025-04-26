#include<iostream>
#include<string>
using namespace std;
int binToDec(int n){
    int result=0;
    int mul=1;
    while (n!=0)
    {
        int q=n%10;
        if(q!=0 && q!=1)
            return 0;
        result+=q*mul;
        n/=10;
        mul*=2;
    }
    return result;
}
int main(){
       
    cout<<"The decimal is ="<<binToDec(101);

    return 0;
}