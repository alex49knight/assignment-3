#include <iostream>
using namespace std;
main()
{
int origNum, num, rem, sum = 0;
cout << "Enter a positive  integer: ";
cin >> origNum;
num = origNum;
while(num != 0)
{
int digit = num % 10;
sum += digit * digit * digit;
num /= 10;
}
if(origNum>=1 && origNum<=9)
cout<< origNum << " is an Armstrong number.";
else if(sum == origNum)
cout << origNum << " is an Armstrong number.";
else
cout << origNum << " is not an Armstrong number.";
return 0;
}

