#include <iostream>
using namespace std;
int main(){
    long long x;
    long long even_min,even_max,odd_min,odd_max;
    bool first_odd=true;
    bool first_even=true;
    while (x!=-1){
        cin>>x;
        if (x==-1)
        {
            break;
        }
        
        if (x%2==0)
        {
            if (first_even)
        {
            even_max=even_min=x;
            first_even=false;
        }   else{
             if (x<even_min)
            {
                even_min=x;
            }
            if (x>even_max)
            {
                even_max=x;
            }
        

        }
           
        } 
        else
        {
            if (first_odd)
            {
                odd_max=odd_min=x;
                first_odd=false;
            }
            else
            {
                if (x<odd_min)
            {
                odd_min=x;
            }
            if (x>odd_max)
            {
                odd_max=x;
            }
            }
            
        }
        
    }
    long long difference_odd=odd_max-odd_min;
    long long difference_even=even_max-even_min;
    cout<<"For even numbers:"<<' '<<difference_even<<"\n";
    cout<<"For odd numbers:"<<' '<<difference_odd;
    cin.get();
    cin.get();
    return 0;
}
