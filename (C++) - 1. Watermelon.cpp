#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    
    if(n>=1 && n<=100)
    {
        if(n==2 || n%2!=0)
            cout<<endl<<"NO";
        else
            cout<<endl<<"YES";
    }
    else
        return 0;
}
