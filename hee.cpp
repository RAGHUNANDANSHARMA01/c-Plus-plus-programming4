#include<iostream>
using namespace std;
int main()
{
	int i,num,sum=0;
	cout<<"enter the positive number:";
	cin>>num;
	i=1;
	while(i<=num)
	{
		sum+=i;
		i++;
		cout<<"the sum of natural number:"<<sum<<endl;
	}
	return 0;
	}
