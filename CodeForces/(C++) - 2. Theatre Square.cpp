#include<iostream>

using namespace std;

int main()
{

    long long int n,m,a;
    cin>>n>>m>>a;
    long long int mul,mul2,no;

    if(n%a ==0)
        mul=n/a;
    else
        mul=(n/a)+1;

    if(m%a ==0)
        mul2=m/a;
    else
        mul2=(m/a)+1;

    no=mul*mul2;

    cout<<no;

return 0;
}