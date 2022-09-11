#include<iostream>

using namespace std;

class complex
{
public:

int real;

 int imaginary;

public: complex()
{
real=imaginary=0;
}

void addition(complex num_r, complex num_s )
{
real=num_r.real+num_s.real;

imaginary =num_r.imaginary+num_s.imaginary; cout<<"the resultant of the addition is\n:"
<<real<<"+("<<imaginary<<")i\n";
}


void subtraction(complex num_r, complex num_s)
{

real=num_r.real-num_s.real;

imaginary = num_r.imaginary-num_s.imaginary; cout<<"the resultant of the subtraction is: "
<<real<<"+("<<imaginary<<")i\n";
}
};

int main()
{
complex numr;
complex nums; complex output;

cout<<"enter the real part of the first complex number\n";
cin>>numr.real;

cout<<"enter the real part of the second complex number\n";
cin>>nums.real;

cout<<"enter the imaginary part of the first complex number\n";
cin>>numr.imaginary;

cout<<"enter the imaginary part of the second complex number\n";
cin>>nums.imaginary;

output.addition (numr, nums); 
output.subtraction (numr, nums);

return 0;
}