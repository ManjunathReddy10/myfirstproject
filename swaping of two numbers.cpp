// swaping of two numbers


#include<iostream>
using namespace std;
int main()

{
	int num1,num2,temp;
	cout<<"enter integer 1"<<endl;
	cin>>num1;
	cout<<"enter integer 2"<<endl;
	cin>>num2;
	
	temp = num1;
	num1 = num2;
	num2 = temp;
	
	cout<<num1<<" "<< num2;
	
	return 0;
	
	
}
