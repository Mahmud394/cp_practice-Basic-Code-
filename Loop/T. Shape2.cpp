#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int i,j;
    for( i=1;i<=N;i++)
    {
        for( j=1;j<=N-i;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=2*i-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

}
