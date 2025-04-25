#include<iostream>
using namespace std;
void fibonacci(int n){
    int first=0;
    int second=1;
    int third;
    // cout<<second<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<first<<endl;
        third=first+second;
        first=second;
        second=third;
    }
    
}
int main(){
       
    fibonacci(8);

    return 0;
}