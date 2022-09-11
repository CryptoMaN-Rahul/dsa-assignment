#include<iostream>
using namespace std;
class friend_class

{
    private:
    float a,b;
    public:
  friend float multiply(friend_class r)
  {
      return r.a*r.b;
    
  }
  void set(float p, float q)
{
    a=p;
    b=q;
}
};
int main()
{
    float r,s;
    cout<<"enter first number to multiply\n";
    cin>>r;
    cout<<"enter second number to multiplied\n";
    cin>>s;
    friend_class friendn;
    friendn.set(r,s);
    cout<<"the multiplied value is"<<multiply(friendn);
    return 0;
}