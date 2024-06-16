#include<iostream>
using namespace std;
class employee
{
    public:
    int empid;
    char empname[50];
    double basic;
    void getdata()
    {
        cout<<"enter details of employee:"<<endl;
        cout<<"enter employee id:";
        cin>>empid;
        cout<<"enter employee name:";
        cin>>empname;
        cout<<"enter the basic salary of employee:";
        cin>>basic;
    }
};
class calculate
{
    public:
    double da,hra,pf,gs,ns;
    void calc(int b)
    {
        da=0.7*b;
        hra=0.3*b;
        pf=0.1*b; 
        gs=b+da+hra;
        ns=b-pf;
    }
};
class display:public employee,public calculate
{
    public:
    void print()
    {
        cout<<"\n employee details:";
        cout<<"employee id:"<<empid<<endl;
        cout<<"employee name:"<<empname<<endl;
        cout<<"baslic salary:rs."<<basic<<endl;
        calc(basic);
        cout<<"gross salary:rs."<<gs<<endl;
        cout<<"net salary:rs."<<ns<<endl;
    }
};
int main()
{
    display emp1;
    emp1.getdata();
    emp1.print();
    return 0;
}