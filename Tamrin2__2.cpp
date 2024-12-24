#include <iostream>
using namespace std;
int main ()
{
    char a,b,c;
    int count=0,defender=0,forward=0,midfield=0;
    for (int i = 0; i <5; i++)
    {
        cin>>a>>b>>c;
        if (a=='+')
        {
            defender++;
            count++;
        } 
        if (b=='+')
        {
            midfield++;
            count++;
        }
        if (c=='+')
        {
            forward++;
            count++;
        }
        
        
    }
    if (count!=10)
    {
        cout<<"Invalid formation";
    }else
    {
        cout<<defender<<'-'<<midfield<<'-'<<forward;
    }
    
    
    cin.get();
    cin.get();
    return 0;
}