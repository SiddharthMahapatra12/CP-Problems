#include<iostream>

using namespace std;

int main()
{
	int w=0,i,n,h,k,a[1000];
	cin>>n>>h;

	if((n>=1 && n<=1000) && (h>=1 && h<=1000))
	{
		for(i=0;i<n;i++)
		{
			cin>>k;

			if(k<=2*h)
			{
				a[i]=k;

				if(a[i]>h)
					w+=2;
				else
					w+=1;
			}
			else
				return 0;
		}		
	}
	else
		return 0;

	cout<<w;

	return 0;
}