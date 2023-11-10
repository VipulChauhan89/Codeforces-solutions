#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

int main()
{
    int n,mx=INT_MIN,current,previous=0,count=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>current;
        if(current<previous)
        {
            count=0;
        }
        count++;
        mx=max(mx,count);
        previous=current;
    }
    cout<<mx<<endl;
    return 0;
}