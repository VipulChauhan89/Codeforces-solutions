#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t,n,num;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int> a(2,0);
        for(int i=0;i<n;i++)
        {
            cin>>num;
            a[num%2]++;
        }
        cout<<((a[1]&1 || (a[1]>0 && a[0]>0))?"YES":"NO")<<endl;
    }
    return 0;
}