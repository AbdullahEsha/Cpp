#include <iostream>

using namespace std;

int main()
{
     int a[15],n,i,k,j;
     
    cout<<"enter array: ";
    cin>>n;
    
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    
    cout<<"enter possition: ";
    cin>>k;
    for(i=n+1;i>=k;i--){
        a[i]=a[i-1];
    }
    cout<<"enter value ";
    cin>>j;
    a[k-1]=j;
    
    for(i=0;i<n+1;i++){
        cout<<a[i];
        cout<<" ";
    }
    
    return 0;
}