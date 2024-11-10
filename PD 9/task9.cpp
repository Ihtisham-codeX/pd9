 
#include<iostream>
using namespace std;
int main()
{
    int m ,   d , div =1000  ;
    string moves[10] = {"shimmy" , "shake" , "pirouette" , "slide" , "box step" , "headspin" , "dosado" , "pop" , "lock" , "arabesque"};
    int pin ;
    cout<<"Enter PIN : ";
    
        cin>> pin ;
    
      
     
        for(int n = 0 ; n <= 3 ; n = n+1 )
        {
            d  =  (pin / div   ) % 10   ;
            if( d   <= 9999 && d  >= 0000 )
            {    
            m = d + n;
             cout<<moves[m]<<" "     ;
             
            div = div / 10 ; }
            else{
                cout<<"Invalid Input";
                return 0;
            }
        }
    
     

}