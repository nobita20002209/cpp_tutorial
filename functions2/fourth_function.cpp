#include<iostream>
using namespace std;
int fact(int n){
    int result=1;
    for (int i = 1; i <=n; i++)
    {
        result*=i;
    }
    return result;
}
int ncr(int n,int r){
    int result;
    result=(fact(n))/(fact(r)*fact(n-r));
    return result;
}
int main(){
       
    cout<<"sum is ="<<ncr(5,1);

    return 0;
}