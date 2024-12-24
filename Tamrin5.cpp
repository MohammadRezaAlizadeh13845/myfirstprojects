#include <iostream>
using namespace std;
int main()
{
int c;
cin>>c;
if (c==2)
{
    cout<<"1";
}
else 
{
int b=1;
for (int i = 2; i <= c; i=i+2)
{
    b=b*i;
}
int d=1;
for (int i = 1; i <= c; i=i+2)
{
    d=d*i;
}
int j;
if (c%2==0)
{
    j=b-d;
}else
{
    j=d-b;
}

cout<<j;
}
cin.get();
cin.get();
return 0;
}