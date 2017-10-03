#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int i,j,a[100][100],rem_i=0,rem_j=0,n=0;

	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			cin>>a[i][j];

			if(a[i][j]==1)
			{
				rem_i=i;
				rem_j=j;
			}	

		}
	}

	n=abs(3-rem_i)+abs(3-rem_j);

	cout<<n;

	return 0;
}