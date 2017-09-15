#include<iostream>
using namespace std;
int main()
{
long int i;
long int x;
long int y;
long int total;
total = 1;
cout << "Enter a number: ";
cin >> x;
cout << "Raise first number to the power of: ";
cin >> y;
for(i=1; i<=y; i++){
total = total*x;
}
cout<<x<<"^"<<y<<" is :"<<total;
return 0;
}
