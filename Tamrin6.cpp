#include <iostream>
using namespace std;
int main()
{
    long long x;
    long long sum=0;
    while (x!=-1)
    {
        cin>>x;
        if (x==-1)
        {
            break;
        }
        sum=sum+x;
    }
    cout<<sum;
    cin.get();
    cin.get();
    return 0;

}

