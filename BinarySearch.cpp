#include <iostream>
using namespace std;

int main()
{
	int n=6, i, arr[10], id=1856, first, last, middle;

	for (i=0; i<n; i++)
	{
	    id = id+1;
	    arr[i] = id;
		cout<<"\nId of student "<<(i+1)<<": "<<arr[i];
	}
	cout<<"\n\nPunch your id : ";
        cin>>id;
	first = 0;
	last = n-1;
	middle = (first+last)/2;
	while (first <= last)
	{
	   if(arr[middle] < id)
	   {
		first = middle + 1;
	   }
	   else if(arr[middle] == id)
	   {
		cout<<"You can enter"<<"\n";
                break;
           }
           else {
                last = middle - 1;
           }
           middle = (first + last)/2;
        }

        if(first > last)
	       {
	          cout<<"Please check your ID "<<"\n";
	       }
	main();
}
