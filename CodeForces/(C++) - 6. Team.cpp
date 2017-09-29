#include<iostream>
using namespace std;
int main()
{
    int n,i,cont=0,j;
    cin>>n;
    int ans[n][3];
    for(i=0;i<n;i++)
        for(j=0;j<3;j++)
            cin>>ans[i][j];
    for(i=0;i<n;i++)
    {
        int sum=0;
        for(j=0;j<3;j++)
        {
            sum=sum+ans[i][j];
        }
        if(sum>=2)
            cont+=1;
    }
    cout<<cont;
    return 0;
}