#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int c=a+b;
    for (int i = 1; i < c; i++)
    {
        if (i<a+b && a<i+b && b<i+a)
        {
        cout<<i<<' ';
        }
    }
    
    cin.get();
    cin.get();
    return 0;
}