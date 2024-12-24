#include <iostream>
using namespace std;
int main()
{
    int x_1,y_1,x_2,y_2,x_3,y_3;
    cin>>x_1>>y_1>>x_2>>y_2>>x_3>>y_3;
    if (y_1==y_2||y_1==y_3||y_2==y_3)
    {
        cout<<"Horizontal, I can finally cogitate!"<<endl;
    }
    if (x_1==x_2||x_2==x_3||x_1==x_3)
    {
        cout<<"Vertical!";
    }
    if (y_1!=y_2 && y_1!=y_3 && y_2!=y_3 && x_1!=x_2 && x_2!=x_3 && x_1!=x_3)
    {
        cout<<"Not this time then!";
    }
    
    
    
}