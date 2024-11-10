#include<iostream>
using namespace std;
int main()
{
    string ele[4];
    for(int idx = 0 ; idx < 4 ; idx ++)
    {
        cin>> ele[idx];
    }
    for(int idx1 = 0 ; idx1 < 4 ; idx1 ++)
    {
        for( int idx = 0 ; idx < 4 ; idx ++)
        {
            if ( ele[idx1] != ele[idx])
            {
                cout<<"false";
                return 0;
            }
        }
    }
    cout<<"true";


}