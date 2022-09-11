#include <iostream>
using namespace std;
int main() 
{
    float fahrenheit,celsius;
    cout<<"enter the temperature in fahrenheit to convert into celsius\n";
    cin>>fahrenheit;
    celsius=5*(fahrenheit-32)/9;
    cout << fahrenheit <<" Fahrenheit is equal to " << celsius <<" degree Centigrade";
    return 0;
}
