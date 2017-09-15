#include <iostream>
using namespace std;

int main()
{
    int a, b, c, i, terms;

      cout<<"Enter number of terms: ";
   cin>>terms;

       a = 0;
    b = 1;
    c = 0;

   cout<<"Fibonacci terms:";

      for(i=1; i<=terms; i++)
    {
cout<<c<<" ";

         a= b;     
        b = c;     
        c = a + b; 
    }

    return 0;
}
