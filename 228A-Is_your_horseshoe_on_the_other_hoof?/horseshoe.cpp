#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int count=0;
    vector<int> A(4);
    cin>>A[0]>>A[1]>>A[2]>>A[3];
    sort(A.begin(),A.end());
    for(int i=1;i<4;i++)
    {
        if(A[i-1]==A[i])
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}