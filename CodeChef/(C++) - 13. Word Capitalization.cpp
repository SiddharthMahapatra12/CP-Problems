#include<iostream>

using namespace std;

int main()
{
	string x;
	cin>>x;

	int k=int(x[0]);

	if(k>=97 && k<=122)
		x[0]-=32;

	for(int i=0;i<x.length();i++)
		cout<<x[i];	

	return 0;
}      