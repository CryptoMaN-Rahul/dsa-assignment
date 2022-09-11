#include <iostream>
using namespace std;

int main()
{
    int s, i,  c, r = 1;
    
    cout << "Enter the number of rows of Floyd's triangle to print: "; 
    cin >> s;
    
    for (i = 1; i <= s; i++)
    {
        for (c = 1; c <= i; c++)
        {        
            cout << r; 
            r++; 
        }
        cout << endl;
    }    
    return 0;
}
