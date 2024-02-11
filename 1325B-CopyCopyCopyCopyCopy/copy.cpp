#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    int t,n,num;
    cin>>t;
    while(t--)
    {
        unordered_map<int,int> m;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>num;
            m[num]++;
        }
        cout<<m.size()<<endl;
    }
    return 0;
}