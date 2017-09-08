#include<iostream>
using namespace std;
main () {
int a,b,c;
cout<<"side 1 "<<endl;
cin>> a;
cout<<"side 2 "<<endl;
cin>> b;
cout<<"side 3"<<endl;
cin>> c;
if ((a+b>c)||(b+c>a)||(a+c>b)){
cout<<"sides of triangle"<<endl;
}else{
cout<<"not sides of triangle"<<endl;
}
}

