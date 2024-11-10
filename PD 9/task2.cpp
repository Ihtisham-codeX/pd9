#include<iostream>
using namespace std;
int main()
{
    string movie;
    float price;
    string movielist[5] = {"gladiator" , "starwars" , "terminator" , "takinglives" , "tombrider"};
    cout<<"Enter the movie you want to watch : "<<endl;
    cin>> movie;
    for(int idx=0 ; idx < 5 ; idx++)
    {
        if( movie == movielist[idx])
        {
            if((idx+1) % 2 == 0)
            {
                price = 500 * 0.9;
            }
            else
            {
                price = 500 * 0.95;                
            }
        }
    }
    cout<< "Price : "<< price;
}

