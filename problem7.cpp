#include<iostream>
using namespace std;

#define Area(m,n) (m*n)

inline float area(float a,float b)
{return a*b;}

int main()
{
int rs;
float l,b;
cout<<"Enter the length and the breadth of the rectangle"<<endl;

cin>>l>>b;

cout<<"Enter 1:To find the area of the rectangle using macros function\n"

 "Enter 2:To find the area of the rectangle using inline function"<<endl;

cin>>rs;

switch(rs)
{
case 1:cout<<"Area of rectangle is "<<Area(l,b)<<endl;
 break;
case 2:cout<<"Area of rectangle is "<<area(l,b)<<endl;
 break;
default:cout<<"errror"<<endl;
}
return 0;
}

