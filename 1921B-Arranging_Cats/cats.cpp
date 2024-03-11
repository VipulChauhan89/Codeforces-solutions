#include<iostream>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
		cin>>n; 
		long long a1=0,a2=0; 
		string s,f;
		cin>>s>>f; 
		for(int i=0;i<n;i++)
        {
			if(s[i]=='0' && f[i]=='1')
            {
                a1++; 
            } 
			else if(s[i]=='1' && f[i]=='0')
            {
                a2++;
            } 
		}
		cout<<max(a1,a1+a2-a1)<<endl;
    }
    return 0;
}