#include<iostream>
using namespace std;

int main()
{
    int t,a,b,c,n;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>n;
        int sum=a+b+c+n;
        cout<<((sum%3!=0 || sum/3<a || sum/3<b || sum/3<c)?"NO":"YES")<<endl;
    }
    return 0;
}