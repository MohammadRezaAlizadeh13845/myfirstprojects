#include <iostream>
#include <algorithm>
using namespace std;
    long long suumofdigits(long long number,long long base){
    long long sum=0;
        while (number!=0)
        {
            sum+=number%base;
            number/=base;
        }
        return sum;

    }
int main()
{
    long long a,b,c,sum,number,output,maxvalue;
    cin>>a;
    cin>>b;
    cin>>c;
    maxvalue=0;
    for (number=b-1;number>a;number--)
    {
        sum=suumofdigits(number,c);
        if (sum>maxvalue)
        {
            maxvalue=sum;
            output=number;
        } else if(sum==maxvalue){
            output=min(output,number);

        }
        
    }
    
    cout<<output;
    cin.get();
    cin.get();
    return 0;
}