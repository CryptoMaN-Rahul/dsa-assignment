#include<iostream>
using namespace std;


int inline square(int x)
{return x*x;}
float inline square(float y)
{return y*y;}
double inline square(double z)
{return z*z;}


int main()
{
int p;
float q;
double r;
cout<<"Enter an interger value whose square is to be found"<<endl;
cin>>p;
cout<<"Enter a floating point value whose square is to be found"<<endl;
cin>>q;
cout<<"Enter a double value whose squre is to be found"<<endl;
cin>>r;
cout<<"Square of "<<p<<" is "<<square(p)<<endl;
cout<<"Square of "<<q<<" is "<<square(q)<<endl;
cout<<"Square of "<<r<<" is "<<square(r)<<endl;
return 0;
}
