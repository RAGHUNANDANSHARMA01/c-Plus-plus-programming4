#include<iostream>
using namespace std;
class calculation
{
	int x,y,add,sub,multi;
	float divi;
		void getvalue();
		void addition();
		void subtration();
		void multiplication();
		void divide();
	};
	inline voidcalculation :: getvalue()
	{
		cout<<"enter first number:";
		cin>>x;
		cout<<"enter second number:";
		cin>>y;
	}
		inline void calculation:: addition()
		{
			add=x+y;
			cout<<"addition of two number:"<<x+y<<"\n";
		}
		inline void calculation::subtration()
		{
			sub=x-y;
			cout<<"subtraction of two number:<<x-y"<<"\n";
		}
		inline void calculation::multiplication()
		{
			multi=x*y;
			cout<<"multiplication of two number:"<<x*y<<"\n";
		}
		inline void calculation::divide()
		{
			
			divi=x/y;
			cout<<"divide of two number:"<<x/y<<"\n";
		}
		int main()
		{
			cout<<"program inline function\n";
			calculation m;
			m.getvalue();
			m.addition();
			m.subtraction();
			m.divide();
		}
			return 0;
		}

