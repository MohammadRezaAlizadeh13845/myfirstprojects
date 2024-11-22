#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
    long long vector_to_number(const vector<int>&digits){
        long long number1=0;
        for (int digit1:digits)
        {
            number1=number1*10+static_cast<long long>(digit1);
        }
        return number1;
        
    }
int main()
{
    int count;
    string number;
    vector<int> digits;
    cin>>number;
    for (char ch: number){
        digits.push_back(ch -'0');
        count++;
    }
    for (int i = 0; i < count-1; i++)
    {
        if (i%2==0)
        {
            digits[i]=(digits[i]+digits[i+1])%10;
        }
        
    }
    long long output=vector_to_number(digits);
    cout<<output;
    cin.get();
    cin.get();
    return 0;
}