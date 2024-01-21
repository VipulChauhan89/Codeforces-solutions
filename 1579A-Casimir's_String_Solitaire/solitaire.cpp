#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int> a(3,0);
        string s;
        cin>>s;
        for(auto i:s)
        {
            a[i-'A']++;
        }
        cout<<((a[1]==a[0]+a[2])?"YES":"NO")<<endl;
    }
    return 0;
}