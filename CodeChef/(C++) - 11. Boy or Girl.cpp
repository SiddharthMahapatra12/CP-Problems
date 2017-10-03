#include<iostream>
#include<string>

using namespace std;

int main()
{
  
  string str;
  int i,c=0,a[26],k;

  cin >> str;

  for(i = 97 ; i < 122 ; i++)
  	a[i]=0;

  for(i = 0 ; i < str.size() ; i++)
  {
  	k=int(str[i]);

    if(a[k]==0)
    {
    	c++;
    	a[k]=1;
    }  
  }
  
  if(c%2==0)
  	cout << "CHAT WITH HER!";
  else
  	cout << "IGNORE HIM!";

  return 0;
}