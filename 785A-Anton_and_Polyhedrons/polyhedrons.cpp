#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<string,int> m ={{"Tetrahedron",4},{"Cube",6},{"Octahedron",8},{"Dodecahedron",12},{"Icosahedron",20}};
    int n,count=0;
    string s;
    cin>>n;
    while(n--)
    {
        cin>>s;
        count+=m[s];
    }
    cout<<count<<endl;
    return 0;
}