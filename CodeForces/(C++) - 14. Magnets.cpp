#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string data[3];
    long n,total,a,b;

    cin>>n;
    total=1;

    for (a=1;a<=n;a++)
    {
        cin>>data[1];
        if (a>1)
        {
            if (data[1][0]==data[2][1])
            	total+=1;
        }
        data[2]=data[1];
    }

    cout<<total;
    return 0;
}