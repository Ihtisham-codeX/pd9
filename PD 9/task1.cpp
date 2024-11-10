#include<iostream>
using namespace std;
int main ()
{
    int qnty;
    string name;
    int total_price = 0;
    string fruit[4]={"peach"  , "apple" , "guava" , "watermelon"};
    int price[4]={60 , 70 , 40 , 30};
    cout<<"Enter the name of  the fruit : ";
    cin>> name ;
    cout<<"Enter quantity of fruit ";
    cin>> qnty ;
    for(int idx = 0 ; idx < 4 ; idx++ )
    {
        if (name == fruit[idx])
        {
             total_price  = price[idx] * qnty;
        }
    }
    cout<<"Total price : "<<total_price;
}