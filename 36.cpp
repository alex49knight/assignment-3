#include<iostream>
using namespace std;
int main()
{
int dig,sum=1,n;
cout<<"Enter a number";
cin>>n;
while(n>0){
dig=n%10;
sum=sum*dig;
n=n/10;
}
cout<<"Product of the digit =" <<sum;
}
