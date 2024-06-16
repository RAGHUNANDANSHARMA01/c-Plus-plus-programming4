#include<iostream>
using namespace std;
int main()
{
    int number;
    int sum=0;
    cout<<"enter the number:";
    cin>>number;
    do
    {
        sum+=number;
        cout<<"enter the number:";
        cin>>number;
    }
    while(number>=0);
    cout<<"the sum of is"<<sum<<endl;
    return 0;

}