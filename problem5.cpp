#include<iostream>
using namespace std;

void swapusingvalue(float x,float y)
{
float z;
z=x;
x=y;
y=z;
cout<<"After swaping A= "<<x<<" and B= "<<y<<endl;
}
void swapusingrefrence(float &b,float &c)
{
float a;
a=b;
b=c;
c=a;
}
int main()
{
int ch;
float a,b;

cout<<"Enter ; 1 To swap two numbers by call by value"

"\nEnter ; 2To swap two numbers by call by reference"<<endl;
cin>>ch;
cout<<"Enter the 2 numbers to be swaped"<<endl;
cin>>a>>b;
cout<<"Before swap A= "<<a<<" and B= "<<b<<endl;

switch(ch)
{
    case 1:swapusingvalue(a,b);
break;
    case 2:swapusingrefrence(a,b);
cout<<"After swaping A= "<<a<<" and B= "<<b<<endl;
break;

default:cout<<"Error"<<endl;
}
return 0;
}