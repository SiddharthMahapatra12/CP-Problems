#include<iostream>

using namespace std;

int main()
{
	string x;
	int may=0,min=0;

	cin>>x;

	for(int i=0;i<x.size();i++)
	{
    	if(x[i]>=97)
    		min++;
    	else
    		may++;
    }
	if(min>=may)
    	for(int i=0;i<x.size();i++)
    	{
        	if(x[i]<97)
            	cout<<(char)(x[i]+32);
        	else cout<<x[i];
        }
	else 
    	for(int i=0;i<x.size();i++)
    	{
        	if(x[i]>=97)
            	cout<<(char)(x[i]-32);
        	else cout<<x[i];
        }    

return 0;
}      