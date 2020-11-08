#include <iostream>
using namespace std;

int main()
{
	int n, i, arr[30], item, first, last, middle;
	cout<<"Array size: ";
        cin>>n;

	for (i=0; i<n; i++)
	{
		cout<<"Enter number "<<(i+1)<<": ";
                cin>>arr[i];
	}
	cout<<"Enter the item to search:";
        cin>>item;
	first = 0;
	last = n-1;
	middle = (first+last)/2;
	while (first <= last)
	{
	   if(arr[middle] < item)
	   {
		first = middle + 1;
	   }
	   else if(arr[middle] == item)
	   {
		cout<<item<<" found in the array at the location "<<middle+1<<"\n";
                break;
           }
           else {
                last = middle - 1;
           }
           middle = (first + last)/2;
        }

        if(first > last)
	       {
	          cout<<item<<" not found in the array";
	       }
	return 0;
}