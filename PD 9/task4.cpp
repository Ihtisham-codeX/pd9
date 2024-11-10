#include<iostream>
using namespace std;
int main()
{
    int num ;
    int numbers[5]; 
    cout<<"Enter number : "<<endl;
         
    for(int idx = 0 ; idx <5 ; idx++ )
    {
        cin>>numbers[idx];
    }
    for(int  idx = 0 ; idx < 5 ; idx++ )
    {
         num = numbers[idx]; 
        while(num > 0)
        {
            num = numbers[idx] % 10;
           
            if(num == 7)
            {
                num = 7;
                cout<<"boom!";
                return 0;
            }
             numbers[idx] = numbers[idx] / 10;

        }
    }
    if(num != 7)
            {
                cout<<"there is no 7 in array";
                 
            }

}