#include<iostream>
using namespace std;

int main(){
    int n=4;
    // INVERTED TRIANGLE PATTERN
    for (int i = 0; i < n; i++)
    {
        // FOR SPACE
        for (int j = 0; j< i;j++)
        {
            cout<<" "<<" ";
        }
        
        // FOR NUMBER
        for (int j = 0; j<n-i;j++)
        {
            cout<<i+1<<" ";
        }
        
        cout<<endl;
    }
    



    return 0;
}