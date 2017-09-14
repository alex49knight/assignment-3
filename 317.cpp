#include<iostream>
#include<cmath>
using namespace std;
main () {
int a,b,c,d,e;
cout<<"a= ";
cin>> a;
cout<<"b= ";
cin>> b;
cout<<"c= ";
cin>> c;
d=((-b+sqrt(b*b-4*a*c))/2*a);
e=((-b-pow(b*b-4*a*c,0.5))/2*a);
cout<<"root 1= "<<d;
cout<<"root 2= "<<e;
}
