#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int t,n,num;
    cin>>t;
    while(t--)
    {
        vector<int> a(2,0);
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>num;
            a[num%2]++;
        }
        cout<<min(a[0],a[1])<<endl;
    }
    return 0;
}