#include<iostream>
using namespace std;
class calculator
{
	private:
	      num1,num2;
		public:
			calc(num1,num2);
			num1=n1;
			num2=n2;
}
void display result()
{
	cout<<"number:"<<num1<<"and"<<num2<<endl;
	cout<<num1<<"="<<num2<<add()<<endl;
	cout<<num1<<"="<<num2<<sub()<<endl;
	cout<<num1<<"="<<num2<<mult()<<endl;
	cout<<num1<<"="<<num2<<divi()<<endl;
}
t add()
{
	return num1+num2;
}
t sub()
{
	return num1-num2;
}
t mult()
{
	return num1*num2;
}
t divi()
{
	return num1/num2;
}
int main()
{
	calculator<int>int calc(2,3);
	calculator<float>float calc(2.2,3.3);
	cout<<"int result"<<endl;
	int result calc.display();
	cout<<endl;
	cout<<"float result"<<endl;
	float result calc.display();
	cout<<endl;
	return 0;
}
