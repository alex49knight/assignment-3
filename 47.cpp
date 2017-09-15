#include<iostream>
using namespace std;
int main(){
int i,n,m=0,f=0;
cout<<"Enter a number";
cin>>n;
m=n/2;
for(i=2;i<=m;i++)
{
if(n%i==0)
{
cout<<"Not prime number"<<endl;
f=1;
break;
}
}
if(f==0)
cout<<"Prime number"<<endl;
return 0;
}
