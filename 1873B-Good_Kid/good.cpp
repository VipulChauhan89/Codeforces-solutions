#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        unsigned long long product=1;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        for(int i=1;i<n;i++)
        {
            product*=a[i];
        }
        cout<<product*(a[0]+1)<<endl;
    }
    return 0;
}