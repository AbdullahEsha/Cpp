#include<iostream>
using namespace std;
 
int main()
{
	int a[20],n,x,i,flag=0;
	cout<<"enter array size ";
	cin>>n;
	cout<<"\nEnter elements \n";
	
	for(i=0;i<n;++i)
		cin>>a[i];
	
	cout<<"\nEnter element to search: ";
	cin>>x;
	
	for(i=0;i<n;++i)
	{
		if(a[i]==x)
		{
			flag=1;
			break;
		}
	}
	
	if(flag)
		cout<<"\n position "<<i+1;
	else
		cout<<"\n not found";
		
	return 0;
}