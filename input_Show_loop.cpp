#include <iostream>

using namespace std;

int main()
{
     int a[40],n,i;
    cout<<"enter array: ";
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        cout<<a[i];
        cout<<" ";
    }
    return 0;
}