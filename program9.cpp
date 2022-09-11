#include<iostream>
using namespace std;
class Bankac
{


    private:
    char name[100];
    char actype[100];
    int acnum;
    int acbalance;
    
    public:
    void intialize()
    {

        cout<<"enter account holders name:";
        cin>>name;
        cout<<"enter type of account:";
        cin>>actype;
        cout<<"enter the account number";
        cin>>acnum;
        cout<<"enter account balance";
        cin>>acbalance;

    }
    void deposit()
    {
     int amount;
     cout<<"enter the amount to depost";
     cin>>amount;
     acbalance+=amount;
     cout<<"deposit succesful, new balance:"<<acbalance;

    }
    void check()
    { int amount;
         cout<<"enter amouint to withdraw:";
    cin>>amount;
    if(amount<=acbalance)
    {
        acbalance-=amount;
        cout<<"amount debited with remaining balance:"<<acbalance;

    }
    else
  {
      cout<<"cannot withdraw";

  }
    }

    void display()
    {
        cout<<"account holders name:"<<name<<endl;
        cout<<"account type:"<<actype<<endl;
        cout<<"account number:"<<acnum<<endl;
    cout<<"balance:"<<acbalance<<endl;
  }
};
int main()
{
    int i;
    Bankac customern;
    customern.intialize();
    cout<<"for account detail enter 1\n";
    cout<<"for deposit enter 2\n";
    cout<<"to wihdraw enter 3\n";
    cin>>i;
    if(i==1)
    {customern.display();
    }
    else if(i==2)
    {customern.deposit();}
    else if(i==3)
    {customern.check();}
    else if (i==0||i>3)
    {cout<<"error";}
    return 0;


}