#include <iostream>
using namespace std;

//Function  prototype
int Sum(int a,int b);

int main()
{
	int num1;
	int num2;	
	int add;
	
	// Get Numbers
	cout<<"Enter first number: ";
	cin>>num1;
	cout<<"Enter second number: ";
	cin>>num2;
	
	//Function call
	add=Sum(num1,num2);
	
	//print addition
	cout<<"Sum of two numbers are: "<<add<<endl;
	
	return 0;
}

//function definition
int Sum(int a,int b)
{
	return (a+b);
}
