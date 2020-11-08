#include <iostream>

using namespace std;

int main()
{
     int a[15],n,i,k;

    cout<<"enter array: ";
    cin>>n;

    for(i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<"enter position: ";
    cin>>k;

    for(i=k-1;i<=n-1;i++){
        a[i]=a[i+1];
    }

    for(i=0;i<n-1;i++){
        cout<<a[i];
        cout<<" ";
    }
    return 0;
}