#include <iostream>
using namespace std;

void bbsort()
{
	int a,b,c,n,i;

	cout<<"Bubble sorting"<<endl;
	cout<<"Enter array size: ";cin>>n;
	int el[n];
	
	cout<<"Enter "<<n<<" elements: ";
	for (i=0;i<n;i++)
		{
		cin>>el[i];
		}
	cout<<"Your data: ";
	for(i=0;i<n;i++)
	cout<<el[i]<<" ";
	
	cout<<endl;	
	for (a = 0; a < n; a++)
	{
		for(b = 0; b < n - a - 1; b++)
		{
			if (el[b] > el[b+1])
			{
				c = el[b];
				el[b] = el[b+1];
				el[b+1] = c;
			}
		}
	}
		cout<<"After sorting...";
	for(a = 0; a < n; a++)
		{cout<<el[a]<<" ";}
	return;
}
void select()
{
	int a,b,c,n,i;

	cout<<"Selection sorting"<<endl;
	cout<<"Enter array size: ";cin>>n;
	int el[n];
	
	cout<<"Enter "<<n<<" elements: ";
	for (i=0;i<n;i++)
		{cin>>el[i];}
		
	cout<<"Your data: ";
	for(i=0;i<n;i++)
	cout<<el[i]<<" ";
		
	cout<<endl;		
	for (a = 0; a < n; a++)
	{
		for(b = a+1; b < n; b++)
		{
			if (el[a] > el[b])
			{
				c = el[a];
				el[a] = el[b];
				el[b] = c;
			}
		}
	}
	cout<<"After sorting...";
	for(a = 0; a < n; a++)
		{cout<<el[a]<<" ";}
		
	return;
}
int main()
{	
	int d,n;
	
	cout<<"Welcome to sorting!"<<endl;
	cout<<"Choices: 1 for bubblesorting | 2 for Selection sorting"<<endl;
	cout<<"Choose what kind of sorting (1 or 2): ";cin>>d;

	
	if(d==1)
		bbsort();
		
	else if(d==2)
		select();
	else
	cout<< "Please select 1 or 2!";
	

}

