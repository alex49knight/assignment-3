#include<iostream>
using namespace std;
int main()
{
int a=1;
int n,x=0;
cout<<"enter the value of n :";
cin>>n;
while(a<=n){
cout<<a<<endl;
x=x+a;
a=a+2;
}
cout<<"the sum is "<<x;
}
