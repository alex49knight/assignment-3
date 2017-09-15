#include<iostream>
using namespace std;
main(){
int a,b,max;
cout<<"Enter first number";
cin>>a;
cout<<"Enter second number";
cin>>b;
max=(a>b) ? a : b;
do
{
if(max%a==0 && max% b==0){
cout<<"LCM="<<max;
break;
}else
++max;
}
while(true);
return 0;
}
