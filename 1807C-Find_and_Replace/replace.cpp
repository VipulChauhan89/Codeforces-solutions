#include<iostream>
#include<vector>
using namespace std;

bool visited(vector<pair<char,char>> ans ,char ch) 
{
    for(auto i:ans)
    {
        if(i.first==ch)
        {
            return true;
        }
    }
    return false;
}
bool checkPos(vector<pair<char,char>> ans ,char ch,char c)
{
    for(auto i:ans)
    {
        if(i.first==ch && i.second==c)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s,sol="YES";
        cin>>s;
        vector<pair<char,char>> ans;
        for(int i=0;i<n;i++)
        {
            char c;
            if(i%2==0)
            {
                c='o';
            }
            else
            {
                c='e';
            }
            if(!visited(ans,s[i]))
            {
                ans.push_back(make_pair(s[i],c));
            }
            if(checkPos(ans,s[i],c))
            {
                continue;
            }
            else
            {
                sol="NO";
                break;
            }
        }
        cout<<sol<<endl;
    }
    return 0;
}