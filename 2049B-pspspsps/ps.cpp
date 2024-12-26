#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int t,n;
    string s;
    cin>>t;
    while(t--) 
    {
        cin>>n>>s;
        size_t pn=s.find('p');
        size_t sn=s.rfind('s');
        if(pn<sn && pn!=string::npos && sn!=string::npos) 
        {
            cout<<"NO"<<endl;
        } 
        else 
        {
            cout<<((pn==n-1 || sn==0 || pn==string::npos || sn==string::npos)?"YES":"NO")<<endl;
        }
    }
    return 0;
}
