#include<iostream>
using namespace std;
main () {
int a,b,c,x;
cout<<"enter first number ";
cin>> a;
cout<<"enter second number ";
cin >> b;
cout<<"enter third number";
cin>> c;
if(a<b){
x=b;
}else{
x=a;}
if(x>c){
cout<<"maximum "<<x<<endl;
}else{
cout<<"maximum "<<c;
}
return 0;
}
