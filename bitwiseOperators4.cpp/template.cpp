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
int main(){
       
    cout<<"The binary is ="<<decToBin(5);

    return 0;
}