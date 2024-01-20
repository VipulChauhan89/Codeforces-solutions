#include<iostream>
using namespace std;

int main()
{
    int t,l,r;
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        int x=-1,y=-1;
        if(l*2<=r)
        {
            x=l;
            y=l*2;
        }
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}