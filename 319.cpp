#include<iostream>
#include<cmath>
using namespace std;
main () {
int a,b,c,d,e,f;
cout<<"marks of 5 subjects ";
cin>> a,b,c,d,e;
f=((a+b+c+d+e)/5)*100;
if(f>= 90){
cout<<"grade A"<<endl;
}else if(f>=80&&f<90){
cout<<"grade B"<<endl;
}else if(f>=70&&f<80){
cout<<"grade C"<<endl;
}else if(f>=60&&f<70){
cout<<"grade D "<<endl;
}else if(f>=40&&f<60){
cout<<"grade E "<<endl;
}else{
cout<<"grade F";
}
}
