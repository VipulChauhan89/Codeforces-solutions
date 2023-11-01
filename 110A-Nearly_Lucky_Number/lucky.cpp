#include<iostream>
using namespace std;

int main()
{
    int count=0;
    unsigned long long n;
    cin>>n;
    while(n!=0)
    {
        int rem=n%10;
        if(rem==4 || rem==7)
        {
            count++;
        }
        n/=10;
    }
    (count==7 || count==4)?cout<<"YES"<<endl:cout<<"NO"<<endl;
    return 0;
}