#include<iostream>
using namespace std;

int main()
{
    int t,n,c1,c2;
    cin>>t;
    while(t--)
    {
        cin>>n;
        c1=n/3;
        c2=n/3;
        if(n%3==1)
        {
            c1++;
        }
        else if(n%3==2)
        {
            c2++;
        }
        cout<<c1<<" "<<c2<<endl;
    }
    return 0;
}