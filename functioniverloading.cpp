#include<iostream>
using namespace std;
absolute(float var)
{
    if(var<0.0)
    var=-var;
    return var;
}
absolute(int var)
{
  if (var<0)
var=-var;
return var;
}
int main()
{
    cout<<"absolute value of -5="<<absolute (-5)<<endl;
    cout<<"absolute value of 5.5="<<absolute (5.5f)<<endl;
    return 0;
}