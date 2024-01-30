#include<iostream>
using namespace std;

int main()
{
    int t,a,b,c;
    cin>>t;
    while(t--)
    {
        int count=0;
        cin>>a>>b>>c;
        if(a<b)
        {
            swap(a,b);
        }
        while(a>b)
        {
            count++;
            a-=c;
            b+=c;
        }
        cout<<count<<endl;
    }
    return 0;
}