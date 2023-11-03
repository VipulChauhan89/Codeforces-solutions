#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    string ans="NO";
    vector<int> A={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    cin>>n;
    for(auto i:A)
    {
        if(n%i==0)
        {
            ans="YES";
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}