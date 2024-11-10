#include<iostream>
using namespace std;
int main()
{
    string s1[1];
    string s2[1];
    cout<<"Enter element for array 1 : ";
    for(int idx = 0 ; idx < 1 ; idx++)
    {
        cin>> s1[idx];
    }
    cout<<"Enter element for array 2 : ";
    for(int idx = 0 ; idx < 1 ; idx ++)
    {
        cin >> s2[idx];
    }
    int a = 0 , count = 0;
    for( char c1 : s1[a])
    {
        int b = 0 ;
        for( char c2 : s2[b])
        {
            if ( c1 == c2 )
            {
                count ++;
            }
            s2[b] = '#';
            
        }
    } 
    cout<<count;
}