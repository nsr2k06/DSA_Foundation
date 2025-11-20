//WAP TO FIND THE GCD OF 2 NUMBERS USING EUCLID METHOD.

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n1,n2;
    cout<<"Enter Number 1 and 2 : ";
    cin>>n1>>n2;

    int b=n2;

    while(n2!=0){
        int temp=n2;
        n2=n1%n2;
        n1=temp;
    }

    cout<<"GCD of "<<n1<<" and "<<b<<" is :"<<n1;

    return 0;
}