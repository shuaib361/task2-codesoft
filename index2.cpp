#include<iostream>
using namespace std;
int main()  // main function
{
	int num1, num2, num3; //local veriables
	
	char op; // opreator such as :+,-,*,/
	
	cout<<"enter the first number:"; // input value for num1 
	cin>>num1; 
	cout<<"Enter the op:";
	cin>>op;
	cout<<"Enter the second number:";//input value for num2
	cin>>num2;
	
	switch(op)  // switch case 
	{
		case '+': num3 = num1 + num2;
		          cout<<"sum of "<<num3;
		         break;
		case '-': num3 = num1 - num2;
		          cout<<"sab of "<<num3;
		         break;
		case '*': num3 = num1 * num2;
		          cout<<"Multi of "<<num3;
		         break;
		case '/': num3 = num1 / num2;
		          cout<<"devide of "<<num3;
		         break;
		default:
			cout<<"not valid op...";
				  
	}
	return 0;
	
}