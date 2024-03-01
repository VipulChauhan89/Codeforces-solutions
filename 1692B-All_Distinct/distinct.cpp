#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    int t,n,num;
    cin>>t;
    while(t--)
    {
        cin>>n;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++)
        {
            cin>>num;
            m[num]++;
        }
        int ans=m.size();
        cout<<(((n-ans)%2==0)?ans:ans-1)<<endl;
    }
    return 0;
}