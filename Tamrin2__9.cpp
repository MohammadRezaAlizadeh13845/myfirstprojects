#include <iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    bool first1=true;
    for (int i = 1; i < n; i++)//halgheye ghable adad
    {
        if (first1)
        {
        first1=false;
        }
        else{

        for (int h = 1; h < i; h++)
        {
            cout<<' ';
        }
        }
        
        int d=((n-i)*2)-1;
        cout<<i;
        for (int j = 0; j < d; j++)
        {
            cout<<' ';
        }
        cout<<i<<"\n";
    }
    int o=n-1;
    for (int p = 0; p < o; p++)//faseleye adad asli
    {
        cout<<' ';
    }
    
    cout<<n<<"\n";
    for (int f = n-1; f > 0; f--)//halgheye baad az adad
    {
        for (int u = f; u > 1; u--)
        {
            cout<<' ';
        }
        
        int s=((n-f)*2)-1;
        cout<<f;
        for (int Y = 0; Y < s ; Y++)
        {
            cout<<' ';
        }
        cout<<f<<"\n";
        
    }
    cin.get();
    cin.get();
    return 0;
}