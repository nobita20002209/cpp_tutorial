#include<iostream>
#include<string>
using namespace std;
string decToBin(int n){
    string result="";
    while (n!=0)
    {
        int q=n%2;
        string c=to_string(q);
        result=c+result;
        n/=2;
    }
    return result;
}
int decToBinInt(int n){
    int result=0;
    int pow=1;
    while (n!=0)
    {
        int q=n%2;
        
        result+=pow*q;
        n/=2;
        pow*=10;
    }
    return result;
}
int main(){
       
    cout<<"The binary is ="<<decToBinInt(7);

    return 0;
}