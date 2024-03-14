#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int count=0;
        string s;
        cin>>s;
        for(int i=0;i<5;i++)
        {
            if(s[i]=='A')
            {
                count++;
            }
        }
        cout<<((count>=3)?"A":"B")<<endl;
    }
    return 0;
}