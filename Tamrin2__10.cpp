#include <iostream>
#include <cmath>
using namespace std;
int numberofroots(double a,double b,double c)
{
double d=b*b-(4*a*c);
if (d>0)
{
    return 2;
}
else if (d==0)
{
    return 1;
} 
else if(d<0)
{
return 0;
}
return 0;
}
double firstroot(double a,double b,double c)
{
double d=b*b-(4*a*c);
double root=((-1)*b+sqrt(d))/(2*a);
return root;
}
double secondroot(double a,double b,double c)
{
double d=b*b-(4*a*c);
double root=((-1)*b-sqrt(d))/(2*a);
return root;
}
int coordinateregions(double a,double b,double c)
{
double d=b*b-(4*a*c);
if (d>0)
{
    if ((c/a)<0)
    {
        return 4;
    } else
    {
        return 3;
    }
    
} else{
    return 2;
}


return 0;
}
int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    if (numberofroots(a,b,c)==1)
    {
        cout<<"there is "<<numberofroots(a,b,c)<<" root"<<"\n";
        cout<<firstroot(a,b,c)<<"\n";
        cout<<"It passes through "<<coordinateregions(a,b,c)<<" coordinate regions";
    } else if (numberofroots(a,b,c)==2){
        cout<<"there are "<<numberofroots(a,b,c)<<" roots"<<"\n";
        double e,r;
        e=firstroot(a,b,c);
        r=secondroot(a,b,c);
        if (e>r)
        {
        cout<<e<<"\n"<<r<<"\n";
        } else 
        {
            cout<<r<<"\n"<<e<<"\n";
        }
        
        cout<<"It passes through "<<coordinateregions(a,b,c)<<" coordinate regions";
    } else{
        cout<<"there is no root"<<"\n";
        cout<<"It passes through "<<coordinateregions(a,b,c)<<" coordinate regions";
    }
    
    cin.get();
    cin.get();
    return 0;
}