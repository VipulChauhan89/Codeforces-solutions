#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n,total=0,sum1=0,count=0;
    cin>>n;
    vector<int> A(n);
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
        total+=A[i];
    }
    sort(A.begin(),A.end());
    while(n--)
    {
        sum1+=A[n];
        count++;
        if(sum1>total/2)
        {
            break;
        }
    }
    cout<<count<<endl;
    return 0;
}