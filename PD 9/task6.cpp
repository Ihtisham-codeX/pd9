#include<iostream>
using namespace std;
int main()
{
    int times , number ;
    cout<<"Enter the number of times even odd operation to be done : ";
    cin>> times;
    int num[3];
    cout<<"Enter array input : ";
    for(int idx = 0 ; idx < 3 ; idx++)
    {
        cin>> num[idx];
    }
    for(int a = 1 ; a <= times ; a++)
    {
        for(int idx = 0 ; idx < 3 ; idx++)
        {                    
            number = num[idx];
            if (number % 2 == 0 ) 
            {
                number = number  - 2 ;    
            }
            if (number % 2 != 0 ) 
            {
                number = number  + 2 ;    
            }
            num[idx] = number;  

        }
    }
    for(int idx = 0 ; idx < 3 ; idx++)
    {
        cout<< num[idx]<<",";
    }
}