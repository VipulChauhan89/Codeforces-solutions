#include<iostream>
#include<unordered_map>
using namespace std;

int main() 
{
    int t,n,m,k;
    cin>>t;
    while(t--) 
    {
        int a,b,multi=0,num;
        cin>>n>>m>>k;
        a=b=k/2;
        unordered_map<int,int> freq_a, freq_b;
        for(int i=0;i<n;i++) 
        {
            cin>>num;
            freq_a[num]++;
        }
        for(int i=0;i<m;i++) 
        {
            cin>>num;
            freq_b[num]++;
        }
        for(int i=1;i<=k;i++) 
        {
            if(freq_b[i] && !freq_a[i] && b)
            {
                b--;
            }
            else if(!freq_b[i] && freq_a[i] && a)
            {
                a--;
            }
            else if(freq_b[i] && freq_a[i])
            {
                multi++;
            }
        }
        cout<<((a+b-multi==0)?"YES":"NO")<<endl;
    }
    return 0;
}
