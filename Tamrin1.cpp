#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    if (n<1 or n>20)
    {
        return 0;
    }
    
    vector<int> values(n);
    for (int i = 0; i < n; i++)
    {
        int d;
        cin >> d;
        values[i]=d;
    }
    for (int i = 0; i < n; i++)
    {
        int a=values[i];
        if (a<1 || a>200)
        {
            cout<<"Invalid Number"<<"\n";
        }else if(a==0 || a==1){
            cout<<"1"<<"\n";
        } else if(a==2){
            cout<<"2"<<"\n";
        } else if(a==3){
            cout<<"6"<<"\n";
        } else if (a==4)
        {
            cout<<"4"<<"\n";
        } else{
            cout<<"0"<<"\n";
        }
        
        
    }
    cin.get();
    cin.get();
}