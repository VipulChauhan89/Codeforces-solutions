#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        int s1=0,s2=0,s3=0;
        cin>>n;
        vector<int> s{3,1,0};
        unordered_map<string,int> m;
        vector<string> a(n),b(n),c(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            m[b[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            cin>>c[i];
            m[c[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            s1+=s[m[a[i]]-1];
            s2+=s[m[b[i]]-1];
            s3+=s[m[c[i]]-1];
        }
        cout<<s1<<" "<<s2<<" "<<s3<<endl;;

    }
    return 0;
}