#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,num,i;
    cin>>n;
    while(n--)
    {
        i=1;
        cin>>num;
        vector<int> A;
        while(num!=0)
        {
            int digit=num%10;
            if(digit!=0)
            {
                A.insert(A.begin(),i*digit);
            }
            i*=10;
            num/=10;
        }
        cout<<A.size()<<endl;
        for(auto i:A)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}