#include<iostream>
using namespace std;

int main()
{
    int t,n,num;
    cin>>t;
    while(t--)
    {
        int countOdd=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>num;
            countOdd+=(num%2==1)?1:0;

        }
        cout<<((countOdd%2==1)?"NO":"YES")<<endl;
    }
    return 0;
}