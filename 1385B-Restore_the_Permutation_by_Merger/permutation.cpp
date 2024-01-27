#include<iostream>
#include<unordered_set>
using namespace std;

int main()
{
    int t,n,num;
    cin>>t;
    while(t--)
    {
        unordered_set<int> s;
        cin>>n;
        for(int i=0;i<2*n;i++)
        {
            cin>>num;
            if(s.count(num))
            {
                continue;
            }
            s.insert(num);
            cout<<num<<" ";
        }
        cout<<endl;
    }
    return 0;
}