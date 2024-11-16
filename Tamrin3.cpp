#include <iostream>
using namespace std;
int main()
{
int b;
int c;
cin>>b>>c;
if (b==1)
{
    if (c>=5)
    {
        c=c*80000;
        int d=c/20;
        c=c-d;
    }else{
        c=c*80000;
    }
    cout<<c;
} else if (b==2)
{
    if (c>=7)
    {
        c=c*100000;
        int d=c/10;
        c=c-d;
    }else{
        c=c*100000;
    }
    cout<<c;
}
else if (b==3)
{
    if (c>=10)
    {
        c=c*120000;
        int d=(c/25)*3;
        c=c-d;

    }
    else{
        c=c*120000;
    }
    cout<<c;
}

cin.get();
cin.get();
return 0;
}