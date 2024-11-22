#include <iostream>
#include <string>
using namespace std;
int main()
{
    string number;
    cin>>number;
    for (int i = 0; i < number.length()-1; i+=2)
    {
        
        number[i]=(((number[i]-'0')+(number[i+1]-'0'))%10)+'0';
        
        
    }
    cout<<number;
    cin.get();
    cin.get();
    return 0;
}