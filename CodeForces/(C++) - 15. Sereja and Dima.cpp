#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int a[n],ans[2]={},k=0;

	for(int i=0;i<n;i++)
		cin>>a[i];
	
	for(int i=0;i<n;)
	{
		if(a[i]>a[n-1])
		{
			ans[k%2]+=a[i];
			i++; 
		}
		else
		{
			ans[k%2]+=a[n-1];
			n--; 
		}
		k++;
	}
	
	cout<<ans[0]<<" "<<ans[1]<<endl;
	return 0;
}