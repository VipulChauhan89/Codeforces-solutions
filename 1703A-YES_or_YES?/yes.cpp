#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        transform(s.begin(),s.end(),s.begin(),::tolower);
        cout<<((s=="yes")?"YES":"NO")<<endl;
    }
    return 0;
}