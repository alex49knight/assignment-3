#include<iostream>
using namespace std;  
   
int main() {  
    int counter, N, i, isPrime, primeFactorSum = 0;  
cout<<"Enter a Number";
   cin>>N;   
 
    for(counter = 2; counter <= N; counter++) {
     isPrime = 1;
        for(i = 2; i <=(counter/2); ++i) {
            if(counter%i==0) {
                isPrime = 0;
                break;
            }
        }
    
        if(isPrime==1)
            primeFactorSum += counter;
    }
    
   cout<<"Sum of Prime Numbers between 1 to "<<N<< "is "<<primeFactorSum;
    return 0;  
}include<iostream>
using namespace std;  
   
int main() {  
    int counter, N, i, isPrime, primeFactorSum = 0;  
cout<<"Enter a Number";
   cin>>N;   
 
    for(counter = 2; counter <= N; counter++) {
     isPrime = 1;
        for(i = 2; i <=(counter/2); ++i) {
            if(counter%i==0) {
                isPrime = 0;
                break;
            }
        }
    
        if(isPrime==1)
            primeFactorSum += counter;
    }
    
   cout<<"Sum of Prime Numbers between 1 to "<<N<< "is "<<primeFactorSum;
    return 0;  
}
