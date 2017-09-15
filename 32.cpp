#include<iostream>
using namespace std;
int main()
{
int y,n,x=0;
cout<<"Enter a number";
cin>>n;
y=n%10;
while(n>=10){
n=n/10;
x++;
}
cout<<"First digit is"<<n<<" and the last digitis"<<y;
}
