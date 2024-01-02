#include<iostream>
using namespace std;

int main()
{
    int t,w,h,n;
    cin>>t;
    while(t--)
    {
        int count=1;
        cin>>w>>h>>n;
        while(count!=n)
        {
            if(w%2==0)
            {
                w/=2;
                count=count*2;
            }
            if(h%2==0)
            {
                h/=2;
                count=count*2;
            }
            if(w%2==1 && h%2==1)
            {
                break;
            }
        }
        cout<<((count>=n)?"YES":"NO")<<endl;
    }
    return 0;
}