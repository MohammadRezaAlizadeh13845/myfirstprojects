#include <iostream>
using namespace std;
int main ()
{
    char a;
    char x='x';
    char y='y';
    int nobat=1;
    long long adad;
    bool nobaat=true;
    cin>>a;
    cin>>adad;
    if (adad==1)
    {
        if (a==x)
        {
            cout<<1<<"\n"<<x;
        } else{
            cout<<1<<"\n"<<y;
        }
        
    }
    else{
        while (adad!=1)
        {
           if (nobaat)
           {
            if (a==y)
            {
                nobat=-1;
            }
            nobaat=false;
           }else{
            nobat=nobat*(-1);
           }
           
           
           if (adad%2==0)
           {
            adad=adad/2;
             
           }
            else
           {
                adad=(adad*3)+1;
                
           }
           cout<<adad<<' ';
        }
        if (nobat==1)
        {
            cout<<"\n"<<y;
        }
        else
        {
            cout<<"\n"<<x;
        }
        
    }
    
    
    
    
    
    
    cin.get();
    cin.get();
    return 0;
}