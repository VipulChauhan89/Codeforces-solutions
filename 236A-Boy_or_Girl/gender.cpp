#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<char,int> m;
    string s;
    cin>>s;
    for(auto i:s)
    {
        m[i]++;
    }
    (m.size()%2==0)?cout<<"CHAT WITH HER!"<<endl:cout<<"IGNORE HIM!"<<endl;
    return 0;
}