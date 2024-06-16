#include<iostream>
using namespace std;
int main()
{
	int i,num,sum=0;
	cout<<"enter a positive number:";
	cin>>num;
	i=1;
	while(i<=num)
	{
		sum+=i;
		i++;
		cout<<"the natural number is:"<<sum<<endl;
	}
	return 0;
}
