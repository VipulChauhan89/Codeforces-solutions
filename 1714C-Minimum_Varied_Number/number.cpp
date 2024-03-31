#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int s,f=9,ans=0;
        cin>>s; 
        vector<int>v;
        while(s)
        {
            if(s>f)
            {
                v.push_back(f);
                s-=f;
                f--;
            }
            else
            {
                v.push_back(s);
                s=0;
            }
        }
        for(int i=v.size()-1;i>=0;i--)
        {
            ans=(ans*10)+v[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}