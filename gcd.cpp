// gratest common diviser(gcd)

#include<iostream>
using namespace std;
int main()

{


	
	int num1,num2 , i , gcd;
	cout<<"enter num1 "<<endl;
	cin>>num1;
	cout<<"enter num2 "<<endl;
	cin>>num2;
	
	
	for(i = 1;i<= num1&& i<=num2;i++)
	{
		if(num1%i == 0 && num2%i == 0)
		{
			gcd = i;
			cout<<gcd;
			
		}
	}
	
	cout<<" gcd is "<< gcd << endl;
	
	return 0;
	
	
}
