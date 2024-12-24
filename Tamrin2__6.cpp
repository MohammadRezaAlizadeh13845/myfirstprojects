#include <iostream>
using namespace std;
int main()
{
    int n;
    char a='*';
    cin>>n;

    if (n<=0)
    { 
        cout<<"Impossible";
    } else 
    {
        for (int i = 1; i <= n; i++)
        {
            if (i%2==0)
            {
                cout<<' ';
            }
            
         for (int j = 0; j < i; j++)
         {
            if (j%2==0)
            {
                cout<<a;
            } else {
                cout<<' ';
            }
            
         }
         
           
        
            
            cout<<"\n";
        }
        
    }
    
    cin.get();
    cin.get();
    return 0;
}