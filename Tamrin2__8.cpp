#include <iostream>
using namespace std;
int main ()
{
    int m,n,d;
    cin>>m>>n;
    for (int i = 0; i < n; i++)//avval
    {
            for (int f = 1; f < m; f++)//dovvom
            {
                int s=m-f;
                for (int h = 0; h < s; h++)//daroon dovvom 1
                {
                    cout<<' '; 
                }
                for (int t = 0; t < f; t++) //daroon dovvom 2
                {
                    cout<<'^';
                }
                cout<<"\n";
            }
            
            for (int j = 0; j < m; j++)//sevvom
            {
                cout<<"^";
            }
            cout<<"\n";

            for (int r = 1; r < m; r++)//chaharrom
            {
                int o=m-r;
                for (int q = 0; q < o; q++)//daroon chaharrom 1
                {
                    cout<<"^";
                }
                for (int l = 0; l < r; l++)//daroon chahrrom 2
                {
                    cout<<' ';
                }
                cout<<"\n";
                
            }
        
    }
    
    cin.get();
    cin.get();
    return 0;
}