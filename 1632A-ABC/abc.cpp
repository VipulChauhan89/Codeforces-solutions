#include<iostream>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s; 
        cin>>s;
        cout<<(((n>2) || (s=="00") || (s=="11"))?"NO":"YES")<<endl;
    }
    return 0;
}