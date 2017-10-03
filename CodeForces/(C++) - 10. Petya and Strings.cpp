#include<iostream>
#include<string>

using namespace std;

int main()
{
  
  string str1,str2;
  cin >> str1 >> str2;

  for(int i = 0 ; i < str1.size() ; i++)
  {
    if('a' <= str1[i] && str1[i] <= 'z')
    	str1[i] = str1[i] -('a' - 'A');  
  }
  for(int i = 0 ; i < str2.size() ; i++)
  {
    if('a' <= str2[i] && str2[i] <= 'z')
    	str2[i] = str2[i] - ('a' - 'A');  
  }
  
  if(str1 == str2)
  	cout << 0 << endl;
  else if(str1 < str2)
  	cout << -1 << endl;
  else
  	cout << 1 << endl;
  

  return 0;
}