//WAP TO FIND THE FACTORIAL OF A NUMBER.

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;

    int fact=1;

    for(int i=1;i<=n;i++){
        fact*=i;
    }

    cout<<"Factorial of "<< n <<" is : "<<fact;
    return 0;
}