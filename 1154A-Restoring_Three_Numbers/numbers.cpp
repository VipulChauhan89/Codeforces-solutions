#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int x1,x2,x3,x4,mx;
    cin>>x1>>x2>>x3>>x4;
    mx=max({x1,x2,x3,x4});
    if(x1!=mx)
    {
        cout<<mx-x1<<" ";
    }
    if(x2!=mx)
    {
        cout<<mx-x2<<" ";
    }
    if(x3!=mx)
    {
        cout<<mx-x3<<" ";
    }
    if(x4!=mx)
    {
        cout<<mx-x4<<" ";
    }
    cout<<endl;
    return 0;
}