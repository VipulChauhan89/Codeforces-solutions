#include<iostream>
using namespace std;
int ctoi(char c)
{
    return c-'0';
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<((ctoi(s[0])+ctoi(s[1])+ctoi(s[2])==ctoi(s[3])+ctoi(s[4])+ctoi(s[5]))?"YES":"NO")<<endl;
    }
    return 0;
}