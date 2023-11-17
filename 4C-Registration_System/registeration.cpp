#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<string,int> m;
    bool check;
    int n;
    string s,s1;
    cin>>n;
    while(n--)
    {
        check=true;
        cin>>s;
        s1=s;
        while(m[s1]!=0)
        {
            check=false;
            s1=s+to_string(m[s]);
        }
        m[s]++;
        cout<<((!check)?s+=to_string(m[s]-1):"OK")<<endl;
    }
    return 0;
}