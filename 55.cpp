#include<iostream>
using namespace std; 
int main()
{
int n,i,f,r,s=0,t;
cout << "Enter a number: ";
cin >> n; 
t=n;
while(n){
i=1,f=1;
r=n%10; 
while(i<=r){
f=f*i;
i++;
}
s=s+f;
n=n/10;
}
if(s==t)
cout << t << " is a strong number";
else
cout << t << " is not a strong number";
return 0;
}
