#include<iostream>
using namespace std;
inline void isprime(int x)
{
    for(int i=2;i<x-1;i++)
{

    if(x%i==0)
{
cout<<"\n the no is not prime";

break;
}
}
int i;
if(i==x)
cout<<"\n the number is prime";
}
int main()
{
    int num;
    cout<<"enter no to be checked";
    cin>>num;
    isprime(num);
}
