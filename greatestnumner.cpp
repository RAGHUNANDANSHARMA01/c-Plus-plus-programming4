#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s="35675435";
    string d="raghunandansharma";
    sort(s.begin(),s.end(),greater<int>());
    sort(d.begin(),d.end());
    cout<<s<<endl;
    cout<<d<<endl;
    return 0;
}