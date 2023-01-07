// leap year divisible by 4 not by 100
// if divisible by both 4 and 100 should be divisible by 400
// then it is leap otherwise not

#include<iostream>
using namespace std;
int main()

{
	int year;
	cout <<"enter year"<< endl;
	cin>>year;
	if (year%4 == 0)
	{
		if(year%100 == 0)
		{
			if(year%400 ==0)
			{
				cout<<"leap year";
				
			}
			else
			{
				cout<<"not a leap year";
			}
		}
		else
		{
			cout<<"leap year";
		}
	}
	
	else 
	{ 
		cout<<" not leap year";
	}
	
	return 0;
}
