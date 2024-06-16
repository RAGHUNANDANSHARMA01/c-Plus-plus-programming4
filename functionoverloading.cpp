#include<iostream>
using namespace std;
class function{
    public:
    void sum(int x,int y){
    int function=x+y;
    cout<<function<<endl;
}
void sum(int x,int y,int z){
    int function=x+y+z;
    cout<<function<<endl;
}
};
int main()
{
    function f;
    f.sum(2,3);
    f.sum(3,4,5);
    return 0;
}