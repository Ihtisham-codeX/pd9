#include<iostream>
using namespace std;
int main()
{
    int   n , time , change = 0 ; ;
    cout<<"How much colors u want to enter : ";
    cin>> n;
    string color[n];
    cout<<"Enter list of colors  : ";
    for(int idx = 0 ; idx < n  ; idx++)
    {
        cin>> color[idx];
        
         
    }
    
    for(int idx = 0 ; idx < n  ; idx++)
    {
        if(idx != n-1)
        {
        if( color[idx] != color[idx +1])
        {
            change++;
        }
        }
        else{
            if(idx == n-1 )
            {
                if(  color[idx] != color[idx-1])
                {
                   change++; 
                }
            }
        }
         
    }
    time = (2*n) + change ;
    cout<< time;
}