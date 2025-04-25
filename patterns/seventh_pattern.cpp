#include<iostream>
using namespace std;
int main(){
    int n=4;


    // FLOYDS Triangle
    int m=1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j >0; j--)
        {
            cout<<m<<" ";
            m++;
        }
        cout<<endl;
        
    }
    


    return 0;
}