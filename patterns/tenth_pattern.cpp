#include<iostream>
using namespace std;

int main(){
    int n=4;    
    // HOLLOW DIAMOND PATTERN
    // UPPER TRIANGLE
    for (int i = 0; i < n; i++)
    {

        // FIRST SPACES
        for (int j = 0; j < n-1-i; j++)
        {
            cout<<" "<<" ";
        }
        
        cout<<"*"<<" ";
        //IN BETWEEN SPACES 
        for (int j = 0; j < 2*i-1; j++)
        {
            cout<<" "<<" ";
        }
        if(i!=0)
            cout<<"*"<<" ";            
        
        cout<<endl; 
    }
    // DOWN TRIANGLE
    for (int i = n-1; i > 0; i--)
    {
        // FIRST SPACES
        for (int j = 0; j <= n-1-i; j++)
        {
            cout<<" "<<" ";
        }
        
        cout<<"*"<<" ";
        //IN BETWEEN SPACES 
        for (int j = 0; j < 2*i-3; j++)
        {
            cout<<" "<<" ";
        }
        if(i!=1)
            cout<<"*"<<" ";            
        cout<<endl; 
    }
    return 0;
}