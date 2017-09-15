#include<iostream>
using namespace std;
int main()
{
char ch;
int i;
for(i=1; i<128; i++)
{
ch=i;
cout<<i<<"-> "<<ch<<"\t";
}
return 0;
}
