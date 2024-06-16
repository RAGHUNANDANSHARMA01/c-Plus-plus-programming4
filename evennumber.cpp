#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter the numbers:"<<endl;
    cin>>a;
    if(a%2==0)
    {
        cout<<"this is even number"<<endl;
    }
    else{
        cout<<"this is odd number"<<endl;
    }
    cout<<"this is final answer :"<<a<<endl;
    return 0;
}