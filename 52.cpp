#include <iostream>
using namespace std;
int main()
{
int num1=1, num2, i, num, digit, sum;
cout << "Enter n= ";
cin >> num2;
cout << "Armstrong numbers between 1 and " << num2 << " are: " << endl;
for(i = num1; i <= num2; i++)
{
sum = 0;
num = i;
for(; num > 0; num /= 10)
{
digit = num % 10;
sum = sum + digit * digit * digit;
}
if(sum == i)
{
cout << i << endl;
}
else if(i>=1 && i<=9)
{cout<<i<<endl;
}
}
