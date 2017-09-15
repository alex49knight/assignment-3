#include<iostream>
using namespace std;
int main(){
  int num,i,f,r,sum,temp;
  int max;

  cout<<"Enter maximum range: ";
  cin>>max;

  cout<<"Strong numbers in given range are: ";
  for(num=1; num <= max; num++){
      temp = num;
      sum=0;

      while(temp){
           i=1;
           f=1;
           r=temp%10;

           while(i<=r){
             f=f*i;
             i++;
           }
         sum=sum+f;
         temp=temp/10;
      }
        
      if(sum==num)
  cout<<num<<endl;
  }
  return 0;
}
