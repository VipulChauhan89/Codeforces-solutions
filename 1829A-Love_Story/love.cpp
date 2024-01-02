#include<iostream>
using namespace std;

int main()
{
    int t;
    string codeforces="codeforces",s;
    cin>>t;
    while(t--)
    {
        int count=0;
        cin>>s;
        for(int i=0;i<10;i++)
        {
            if(s[i]!=codeforces[i])
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}