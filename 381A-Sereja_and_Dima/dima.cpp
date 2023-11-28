#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,l=0,flag=0;
    cin>>n;
    int h=n-1;
    vector<int> A(n),Ans(2,0);
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    while(l<=h)
    {
        if(A[l]>=A[h])
        {
            Ans[flag%2]+=A[l++];
        }
        else
        {
            Ans[flag%2]+=A[h--];
        }
        flag++;
    }
    cout<<Ans[0]<<" "<<Ans[1]<<endl;
    return 0;
}