#include<iostream>
using namespace std;
bool isPrime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int n,a,b;
    cin>>n;
    a=4,b=n-4;
    for(int i=1;i<=n;i++)
    {
        if(isPrime(a) && isPrime(b))
        {
            cout<<a<<" "<<b<<endl;
            break;
        }
        a++;
        b--;
    }
    return 0;
}