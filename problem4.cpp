#include<iostream>
#include<string.h>
using namespace std;
int main()
{
 int i, j,s;
cout<<"Enter the total number of names you want to sort"<<endl;
cin>>s;
 char name[100][100],t[100];
cout<<"Enter the names"<<endl;
for(i=0; i<s; i++)
cin>>name[i];
for(i=0; i<s; i++)
 {
for(j=0; j<s; j++)
 if(strcmp(name[j], name[j+1])<0)
 {
strcpy(t, name[j+1]);
strcpy(name[j+1], name[j]);
strcpy(name[j], t);
 }
 }
cout<<"\nNames in descending order are as follows:\n";
for(i=0; i<s; i++)
cout<<name[i]<<endl;
cout<<endl;
 return 0;
}