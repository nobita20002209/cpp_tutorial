#include<iostream>
using namespace std;

int main(){
    int n=4;    

    // PYRAMID PATTERN
    for (int i = 0; i < n; i++)
    {   
        // FOR _SPACE
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<" "<<" ";
        }
        
        // FOR FIRST NUBMERS:i+1
        for (int j = 1; j <= i+1; j++)
        {
            cout<<j<<" ";
        }
        // FOR SECOND NUBMER
        for (int j = i; j >0; j--)
        {   
            cout<<j<<" ";
        }
        cout<<endl;
    }
    // int n=4;    
    // int m=1;
    // // PYRAMID PATTERN
    // for (int i = 0; i < n; i++)
    // {   
    //     m=1;
    //     // FOR _SPACE
    //     for (int j = 0; j < n-i-1; j++)
    //     {
    //         cout<<" "<<" ";
    //     }
        
    //     // FOR FIRST NUBMERS
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         cout<<m<<" ";
    //         m++;
    //     }
    //     // FOR SECOND NUBMER
    //     int est=i;
    //     for (int j = 0; j < i; j++)
    //     {   
    //         cout<<est<<" ";
    //         est--;
    //     }
    //     cout<<endl;
    // }
    


    return 0;
}