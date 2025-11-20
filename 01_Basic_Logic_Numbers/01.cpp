//WAP TO PRINT NO. FROM 1 TO N

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Number Till Where You Want To Print Numbers : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }

    return 0;
}