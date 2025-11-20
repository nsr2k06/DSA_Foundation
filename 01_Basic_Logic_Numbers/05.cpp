//WAP TO PRINT THE FIBONACCI SERIES.

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;

    int first=0;
    int second=1;

    if(n>=1) cout<<first<<" ";
    if(n>=2) cout<<second<<" ";

    for(int i=3;i<=n;i++){
        int next=first+second;
        cout<<next<<" ";
        first=second;
        second=next;
    }

    return 0;
}