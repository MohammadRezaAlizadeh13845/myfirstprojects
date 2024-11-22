#include <iostream>
using namespace std;
int main()
{
    int n;
    bool first=true;
    string me="it's me and you",you=" and you and me",its=" it's me and you";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        if (first)
        {
            cout<<me<<"\n";
            first=false;
        }else
        {
            if (i%2!=0)
            {
                me+=you;
                cout<<me<<"\n";
            }
            else
            {
                me+=its;
                cout<<me<<"\n";
            }
            
        }
        
    }
    
    cin.get();
    cin.get();
    return 0;
}