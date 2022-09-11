
 #include <iostream>
using namespace std;
class student
{
 private:
char nameofstud[100],grade;

 int rollno;

 float it1,it2,it3,avrg;

 public:
 void input();
 void output();
 void process();
};
void student::input()
{
cout << "Enter NAME of the student: " ;
cin >> nameofstud;

cout << "Enter Roll number of the student: ";
cin >> rollno;

cout<<"enter Marks between 1 to 25\n";

cout << "Enter Marks of IT 1,2 and 3 respectively"<<endl;
cin >> it1>>it2>>it3;
process();
}
void student::output()
{
cout<<avrg<<endl<<grade<<endl;
}
void student::process()
{
    if(((it2>it1)&&(it2>it3)&&(it3>it1))||((it3>it1)&&(it3>it2)&&(it2>it1)))
avrg=(it2+it3)/2.0;

else if(((it1>it2)&&(it1>it3)&&(it2>it3))||((it2>it1)&&(it2>it3)&&(it1>it3)))
avrg=(it1+it2)/2.0;

else
avrg=(it1+it3)/2.0;
cout<<"\ngrade of sudent\n:";
if(avrg>=22 && avrg<=25)
        cout<<"A";
    else if(avrg>=18 && avrg<21)
        cout<<"B";
    else if(avrg>=14 && avrg<18)
        cout<<"C";
    else if(avrg>=10 && avrg<14)
        cout<<"D";
        else if(avrg>=6 && avrg<10)
        cout<<"E";
        else if(avrg>=1&& avrg<6)
        cout<<"F";
        else
        cout<<"invaliud";

}
int main()
{
 student stud1[100];
 int n,i;
 float avrg;
cout << "Enter total number of students: ";
cin >> n;

for(i=0;i<=n-1; i++)
 {
cout << "\nEnter details of student " << i+1 <<endl;
 stud1[i].input();
 }

cout << endl;

for(i=0;i<=n-1; i++)
{
cout <<"\n\n average of student  " << (i+1) <<endl;
 stud1[i].output();
 }
 

  


 return 0;
}