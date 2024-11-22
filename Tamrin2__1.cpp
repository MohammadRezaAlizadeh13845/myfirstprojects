#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main ()
{
    vector<string>ponez;
    int n,a;
    string b="Is in group 0" , c="Is in group 1",d="Is in group 2" ;
    string e="Is in group 3",f="Is in group 4",g="Is in group 5";
    string h="Is in group 6",s="Is in group 7",j="Is in group 8";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        if (a>0)
        {
            if (a%2==0&&a%3==0)
            {
                ponez.push_back(c);
            } else if (a%2!=0&&a%3!=0)
            {
                ponez.push_back(f);
            }
            if (a%2!=0&&a%3==0)
            {
                ponez.push_back(d);
            } else if(a%2==0&&a%3!=0){
                ponez.push_back(e);
            }
            
            
        } else if (a<0)
        {
            if (a%2==0&&a%3==0)
            {
                ponez.push_back(g);
            } else if (a%2!=0&&a%3!=0)
            {
            
            ponez.push_back(j);
            }
            if (a%2!=0&&a%3==0)
            {
                ponez.push_back(h);
            } else if(a%2==0&&a%3!=0)
            {
                ponez.push_back(s);
            }
        
        }
        else
        {
            ponez.push_back(b);
        }
        
        
    }
    for (int i = 0; i < n; i++)//biroon dadane string ha
    {
        cout<<ponez[i]<<"\n";
    }
    
    cin.get();
    cin.get();
    return 0;
}