#include<iostream>
using namespace std;
int main()

{
    int length;
    string a;
    cout<<"Enter any word : ";
    cin>> a;
    string word[1]={a};
    length = word[0].length();
    if(length % 2 == 0)
    {
        cout<<"true";
    }
    else{
        cout<<"false";
    }

    
}