#include<iostream>
using namespace std;

int main()
{
    int t,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        cout<<((a==b+c || b==a+c || c==b+a)?"YES":((a==b && c%2==0)?"YES":((b==c && a%2==0)?"YES":((a==c && b%2==0)?"YES":"NO"))))<<endl;
    }
    return 0;
}