#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,fin=0,x;
        cin >> n;
        for(int i=0; i<n; i++)
        {
            cin >> x;
            fin=__gcd(fin,x);
        }
        if(fin==1)
            cout << n << endl;
        else cout << -1 << endl;
    }
    return 0;
}
