#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t,s1,s2,s3,s4,mx1,mx2,sum1,sum2;
    cin>>t;
    while(t--)
    {
        cin>>s1>>s2>>s3>>s4;
        sum1=s1+s2;
        sum2=s3+s4;
        mx1=max(s1,s2);
        mx2=max(s3,s4);
        cout<<((sum1-mx1<mx2 && sum2-mx2<mx1)?"YES":"NO")<<endl;

    }
    return 0;
}