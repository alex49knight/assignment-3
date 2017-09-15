#include <iostream>
using namespace std;
int main()
{
int low=2, high, i, flag;
cout << "Enter n ";
cin >> high;
cout << "Prime numbers between 1 and " << high << " are: ";
while (low < high)
{
flag = 0;
for(i = 2; i <= low/2; ++i)
{
if(low % i == 0)
{
flag = 1;
break;
}
}
if (flag == 0)
cout << low << " ";
++low;
}
return 0;
}
