//WAP TO PRINT THE NUMBER IN REVERSED ORDER.

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;

    int rev=0;
    while(n>0){
        int digit=n%10; //EXTRACT LAST DIGIT
        rev=rev*10+digit;
        n=n/10;
    }

    cout<<"Reversed Number : "<<rev;


    return 0;
}