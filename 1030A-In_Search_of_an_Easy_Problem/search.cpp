#include<iostream>
#include<vector>
using namespace std;

int main()
{
    string ans="EASY";
    int n;
    cin>>n;
    vector<int> A(n);
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
        if(A[i]==1)
        {
            ans="HARD";
        }
    }
    cout<<ans<<endl;
    return 0;
}