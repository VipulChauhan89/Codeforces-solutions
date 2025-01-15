#include<iostream>
using namespace std;

int main()
{
    int t,n,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b>>c;
        int sum=a+b+c,journey=n/sum,complete=journey*sum,remaining=n-complete;
        int days=journey*3;
        if(remaining>0)
        {
            days++;
            remaining-=a;
        }
        if(remaining>0)
        {
            days++;
            remaining-=b;
        }
        if(remaining>0)
        {
            days++;
            remaining-=c;
        }
        cout<<days<<endl;
    }
    return 0;
}
