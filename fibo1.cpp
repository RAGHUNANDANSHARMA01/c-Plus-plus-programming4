#include<iostream>
using namespace std;
int fib(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    if(n==3)
    {
        return 3;
    }
    return (n-1)+fib(n-2)+fib(n-3);
}
int main()
{
    int n;
    cout<<"enter the n number:";
    cin>>n;
    cout<<fib(n)<<" ";
    return 0;
}