#include <iostream>
#define pi 3.14
using namespace std;
float hadis(int t)
{
    return pi*t*t;
}
float hosseini(int o)
{
    return pi*o*2;
}
int main()
{
    int r;
    cout<<"enter Radius:";
    cin>>r;
    cout<<"Area of circle is:"<<hadis(r)<<endl;
    cout<<"perimeter of circle is :"<<hosseini(r);
    return 0;
}