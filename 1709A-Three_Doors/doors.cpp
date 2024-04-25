#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t,x;
    cin>>t;
    while(t--)
    {
        int ans=0;
        cin>>x;
        vector<int> a(3);
        for(int i=0;i<3;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<3;i++)
        {
            if(a[x-1]!=0)
            {
                ans++;
                x=a[x-1];
            }
        }
        cout<<((ans==2)?"YES":"NO")<<endl;
    }
    return 0;
}