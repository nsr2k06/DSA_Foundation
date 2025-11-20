//WAP TO CHECK WHETHER A NUMBER IS PRIME OR NOT.

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;

    if(n<=1) cout<<"This is Not a Prime Number.";
    bool isPrime=true;

    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            isPrime=false;
            break;
        }
    }

    if(isPrime) cout<<"This is a Prime Number";
    else cout<<"This is Not a Prime Number.";

    return 0;
}