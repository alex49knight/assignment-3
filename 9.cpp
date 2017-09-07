#include<iostream>
using namespace std;
main () {
char a;
cout<<"character ";
cin>> a;
if((a>='a'&&a<='z')||(a>='A'&&a<='Z')){
cout<<"alphabet ";
}else if
(a>='0'&&a<='9'){
cout<<"numeral ";
}else{
cout<<"special character ";
}
}
