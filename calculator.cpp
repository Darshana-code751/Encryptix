#include<iostream>
using namespace std;
int main()
{
	char op;
	float num1,num2;
	cout<<"enter two operands: ";
	cin>>num1>>num2;
	cout<<"enter operator:+,-,*,/: ";
	cin>>op;
	switch(op)
	{
		case '+':
			cout<<num1+num2;
			break;
		case '-':
		    cout<<num1-num2;
			break;
		case '*':
		    cout<<num1*num2;
		    break;
		case '/':
			cout<<num1/num2;	
			break;
		default:
		cout<<"error!operator is not correct ";					
	}
	return 0;
}


