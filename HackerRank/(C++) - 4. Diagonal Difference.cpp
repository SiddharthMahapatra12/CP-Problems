#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    
    int n,sum1=0,sum2=0,diff=0;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    
    for(int i = 0;i < n;i++){
       for(int j = 0;j < n;j++){
          cin >> a[i][j];
          if(a[i][j]>=-100 && a[i][j]<=100)
          {
              if(i==j)
                 sum1+=a[i][j];
              if(i + j == n-1)
                 sum2+=a[i][j];
          }
         else
              break;
       }
    }
    
    diff=abs(sum1-sum2);
    cout<<diff;    

    return 0;
}
