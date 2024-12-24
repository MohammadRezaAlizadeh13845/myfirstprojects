#include <iostream>
#include <cmath>
using namespace std;
bool isperfectcube(int number){
    int cuberoot=round(cbrt(number));
    return (cuberoot*cuberoot*cuberoot==number);
}
bool isperfectsquare(int number){
    int squareroot=round(sqrt(number));
    return (squareroot*squareroot==number);
}
int main ()
{
    string c;
    int d,e;
    int count=0;
    cin>>c>>d>>e;
    
     if (c=="cubic")
    {
        for (int i = d+1; i < e; i++)
    {
       if (isperfectcube(i))
        {
            cout<<i<<' ';
            count++;
        }
        
    }
    }else
    {

    for (int i = d+1; i < e; i++)
    {
        if (isperfectsquare(i))
        {
            cout<<i<<' ';
            count++;
        }
        
    }
    
    }
   
    if (count==0)
    {
        cout<<"None";
    }
    
    
    cin.get();
    cin.get();
    return 0;
}