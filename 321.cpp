#include<iostream>
#include<cmath>
using namespace std;
main () {
float a,b,c,d,e,f;
cout<<"unit consumed ";
cin>> a;
b=a*0.50;
c=25+(a-50)*0.75;
d=100+(a-150)*1.20;
e=220+(a-250)*1.50;
if(a<= 50){
cout<<"Amount="<<'b' endl;
}else if(a<=150&&a>50){
cout<<"amount="<<'c' endl;
}else if(a<=250&&a>150){
cout<<"amount="<<'d' endl;
}else if(a>250){
cout<<"amount= "<<'e' endl;
}
}
