#include<iostream>
using namespace std;

int main(){
    int n=4;
    int m=1;
    for (int i = 1; i <= n; i++)
    {
        m=1;
        for (int j = 0; j < i; j++)
        {
            cout<<m<<" ";
            m++;
        }
        cout<<endl;
        
    }
    

    return 0;
}