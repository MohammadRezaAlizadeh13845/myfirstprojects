#include <iostream>
using namespace std;
int main (){
    int a;
    int b;
    cout << "This program gives you the sum of two numbers." << '\n' << "Enter the first number please."<<'\n';
    cin >> a ;
    cout << "Enter the second number please." << '\n' ;
    cin >> b ;
    int sum=a+b;
    cout<< "The sum of your numbers are:"<< sum << '\n';
    cout<<"Thank you for using this program! press any key to exit.";
    cin.ignore();
    cin.get();
    return 0;
}