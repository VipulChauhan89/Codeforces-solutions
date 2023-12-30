#include<iostream>
using namespace std;

int main()
{
    int t;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        cout<<((s=="abc" || s=="cba" || s=="bac" || s=="acb")?"YES":"NO")<<endl;
    }
    return 0;
}