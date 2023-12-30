#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t,n;
    string s;
    cin>>t;
    while(t--)
    {
        int sum=0;
        cin>>n>>s;
        vector<bool> a(26,false);
        for(int i=0;i<n;i++)
        {
            if(a[s[i]-'A']==false)
            {
                a[s[i]-'A']=true;
                sum+=2;
            }
            else
            {
                sum++;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}