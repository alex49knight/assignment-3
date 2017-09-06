#include<iostream>
using namespace std;
main () {
int a;
cout<<"number ";
cin>> a;
if(a%5==0){
cout<<"divisible by 5"<<endl;
}else if(a%11==0){
cout<<"divisible by 11"<<endl;
} else{
cout<<"not divisible by 5&11 "<<endl;
}
}
