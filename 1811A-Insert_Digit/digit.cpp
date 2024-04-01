#include<iostream>
using namespace std;

int main()
{
    int t,n,num;
    cin>>t;
    while(t--)
    {
        cin>>n>>num;
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]-'0'<num)
            {
                s.insert(i,to_string(num));
                break;
            }
        }
        if(s.length()==n)
        {
            s+=to_string(num);
        }
        cout<<s<<endl;
    }
    return 0;
}