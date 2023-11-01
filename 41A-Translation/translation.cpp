#include<iostream>
using namespace std;

int main()
{
    string t,s;
    cin>>t>>s;
    int i=0,j=s.length()-1;
    while(t[i]==s[j] && j!=-1)
    {
        i++;
        j--;
    }
    (i==t.length())?cout<<"YES"<<endl:cout<<"NO"<<endl;
    return 0;
}