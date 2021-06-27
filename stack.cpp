#include<iostream>
using namespace std;
int st[10],top=0,n;

void push(int v)
{
    if(top==10)
    {
        cout<<"over flow";
    }
    else
    {
        st[top]=v;
        top++;
    }

}
void pop()
{
    if(top==0)
        cout<<"under flow";
    else
    {
        top--;
    }
}
int getTopElement(){
    cout<<"Top Element is: "<<st[top-1]<<endl;
}
int print(){
    cout<<"Elements are: \n";
  for(int i=top-1; i>=0; i--)
    {
        cout<<st[i]<<"\n";
    }
}
int main()
{
   //declare necessary variables and objects
	bool repeat = true;
	while(repeat==true)
	{
		cout<<"What do you want?"<<endl<<endl;
		cout<<"1. Push an Element"<<endl;
		cout<<"2. Pop an Element"<<endl;
		cout<<"3. Get the top Element"<<endl;
		cout<<"4. Print the stack"<<endl;
		cout<<"5. Evaluate a Postfix Expression"<<endl;
		cout<<"6. Exit"<<endl;
		
		int choice,x;
		cin>>choice;
		
		switch(choice)
		{
			case 1:
			    cout<<"Enter a value: ";
				cin>>x;
				push(x);
				break;
				
			case 2:
	            
				pop();
				break;
				
			case 3:
			    
				getTopElement();
				break;
				
			case 4: 
				
				print();
				break;
				
			case 5:
			
				//evaluateExpression();
				break;
				
			case 6:
			
				repeat = false;
				cout<<"You have choose to Exit...."<<endl;
				break;
			
			default:
				
				cout<<"Invalid Choice..."<<endl;
				break;
		}
	}
}