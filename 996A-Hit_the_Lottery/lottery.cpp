#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> bills={100,20,10,5,1};
    int n;
    cin>>n;
    cout<<n/bills[0]+(n%bills[0])/bills[1]+((n%bills[0])%bills[1])/bills[2]+(((n%bills[0])%bills[1])%bills[2])/bills[3]+((((n%bills[0])%bills[1])%bills[2])%bills[3])/bills[4]<<endl;
    return 0;
}