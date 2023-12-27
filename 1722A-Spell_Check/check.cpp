#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t,n;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        sort(s.begin(),s.end());
        cout<<((s=="Timru")?"YES":"NO")<<endl;
    }
    return 0;
}