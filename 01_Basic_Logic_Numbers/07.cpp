//WAP TO CHECK FOR PALLINDROME NUMBER.

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;

    int copy=n;

    int rev=0;
    while(n>0){
        int digit=n%10; //EXTRACT LAST DIGIT
        rev=rev*10+digit;
        n=n/10;
    }

    if(copy==rev) cout<<copy<<" is Pallindrome Number.";
    else cout<<copy<<" is not Pallindrome Number.";

    return 0;
}