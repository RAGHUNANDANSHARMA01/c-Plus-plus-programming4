#include<iostream>
using namespace std;
int main()
{
    int n;
    int factorial=1;
    cout<<"enter the N numbers:"<<endl;
    cin>>n; 
    for(int i=0;i<=n;i++)
    {
    factorial*=i; 
    }
    cout<<"fatorial numbers:"<<factorial<<endl;
    return 0;
}