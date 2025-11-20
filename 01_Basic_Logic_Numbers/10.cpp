//WAP TO FIND THE LCM OF TWO NUMBERS.

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n1,n2;
    cout<<"Enter Number 1 and 2 : ";
    cin>>n1>>n2;

    int a=n1;
    int b=n2;

    while(n2!=0){
        int temp=n2;
        n2=n1%n2;
        n1=temp;
    }

    int gcd=n1;
    int lcm=(a*b)/gcd;
    cout<<"LCM : "<<lcm;

    return 0;
}