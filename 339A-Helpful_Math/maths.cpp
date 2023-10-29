#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> A;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i+=2)
    {
        A.push_back(s[i]-'0');
    }
    sort(A.begin(),A.end());
    for(int i=0;i<A.size();i++)
    {
        if(i!=A.size()-1)
        {
            cout<<A[i]<<"+";
        }
        else
        {
            cout<<A[i]<<endl;
        }
    }
    return 0;
}