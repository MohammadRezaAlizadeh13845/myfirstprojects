#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long a,b,x;
    long long count_odd,count_even;
    count_even=count_odd=0;
    cin>>a>>b;
    x=a;
    while (x<=b)
    {
        if (x%2==0)
        {
            count_even++;
        }
        else
        {
            count_odd++;
        }
        x++;
        
    }
    long long output_even= static_cast<long long>(pow(2,count_even));
    long long output_odd= static_cast<long long>(pow(2,count_odd));
    long long final_output= output_even-output_odd;
    if (final_output<0)
    {
        final_output=final_output*-1;
    }
    cout<<final_output;
    
    cin.get();
    cin.get();
    return 0;
}