#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    b += c/60;
    int final=(a+(b/24))%7;
    switch (final)
    {
    case 0:
        cout<<"Wednesday";
        break;
    case 1:
        cout<<"Thursday";
        break;
    case 2:
        cout<<"Friday";
        break;
    case 3:
        cout<<"Saturday";
        break;
    case 4:
        cout<<"Sunday";
        break;
    case 5:
        cout<<"Monday";
        break;
    case 6:
        cout<<"Tuesday";
        break;
    default:
        break;
    }
    cin.get();
    cin.get();
    return 0;
}