#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,sum=0;
    string s1,s2;
    cin>>n>>s1>>s2;
    for(int i=0;i<n;i++)
    {
        sum+=min(10-abs(s1[i]-s2[i]),abs(s2[i]-s1[i]));
    }
    cout<<sum<<endl;
    return 0;
}