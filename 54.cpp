#include <iostream>
using namespace std;
int main()
{
int i, j, n, sum;
cout<<"Enter n= ";
cin>>n;
cout<<"All Perfect numbers between 1 to "<< n<<endl;    
for(i=1; i<=n; i++)
{
sum = 0;
for(j=1; j<i; j++)
{
if(i % j == 0)
{
sum += j;
}
}
if(sum == i)
{
cout<<i<<endl;
}
}
return 0;
}
