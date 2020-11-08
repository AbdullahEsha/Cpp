#include<iostream>

using namespace std;

int main()
{
	int a[20],n,i,j,temp;
cout<<"Array size: ";
        cin>>n;

	for (i=0; i<n; i++)
	{
		cout<<"Enter number "<<(i+1)<<": ";
                cin>>a[i];
	}

	for(i=1;i<n;++i)
	{
		for(j=0;j<(n-i);++j)
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
	}

	cout<<"Array after bubble sort:";
	for(i=0;i<n;++i)
		cout<<" "<<a[i];

	return 0;
}