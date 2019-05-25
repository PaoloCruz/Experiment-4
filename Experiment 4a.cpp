#include <iostream>

using namespace std;

void code()
{
	char opt; 
	int oper,a,b;
	
	cout<<"Welcome to Calculator!"<<endl;
	cout<<"If you wish to continue after the result press Y, press any letters if you don't want to continue."<<endl;
	cout<<"Menu:"<<endl<<"1. Add"<<endl<<"2. Subtract"<<endl<<"3. Multiply"<<endl<<"4. Divide"<<endl<<"5. Modulus"<<endl;
	
do
{
	cout<<"Enter your choice (1-5): ";cin>>oper;
	switch(oper)
	{
		case 1:	
			{
			cout<<"Enter your two numbers: ";cin>>a;cin>>b;
			cout<<"Result: "<<a+b<<endl;
			break;
			}
		case 2:
			{
			cout<<"Enter your two numbers: ";cin>>a;cin>>b;
			cout<<"Result: "<<a-b<<endl;
			break;
			}
		case 3:
			{
			cout<<"Enter your two numbers: ";cin>>a;cin>>b;
			cout<<"Result: "<<a*b<<endl;
			break;
			}
		case 4:
			{
			cout<<"Enter your two numbers: ";cin>>a;cin>>b;
			cout<<"Result: "<<a/b<<endl;
			break;
			}
		case 5:
			{
			cout<<"Enter your two numbers: ";cin>>a;cin>>b;		
			cout<<"Result: "<<a%b<<endl;
		
			break;
			}
		default:
			{
			cout<<"Please choose 1-5!"<<endl;
			break;
			}	
	}
	cout<<"Continue? ";cin>>opt;
}
		while (opt=='y' || opt=='Y');
		if(opt!='Y' || opt!='y')
		cout<<"Thank You!";
}

int main()
{
	code();	
	return 0;
}
