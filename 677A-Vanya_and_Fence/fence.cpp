#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,h,road=0;
    cin>>n>>h;
    vector<int> A(n);
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
        road+=(A[i]>h)?2:1;
    }
    cout<<road<<endl;
    return 0;
}