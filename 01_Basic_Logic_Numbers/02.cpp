//WAP TO PRINT THE SUM OF FIRST N NUMBERS.

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;

    int sum=0;

    for(int i=0;i<=n;i++){
        sum+=i;
    }

    cout<<"Sum of First "<< n <<" Numbers : "<<sum;
    return 0;
}